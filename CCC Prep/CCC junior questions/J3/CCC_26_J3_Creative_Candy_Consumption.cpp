#include <iostream>
#include <string>
using namespace std;

int main() {
    string ngoc, minh;
    cin >> ngoc >> minh;

    size_t i = 0, j = 0;
    long long ngocEats = 0, minhEats = 0;

    auto beats = [](char a, char b) {
        return (a == 'R' && b == 'G') ||
               (a == 'G' && b == 'B') ||
               (a == 'B' && b == 'R');
    };

    while (i < ngoc.size() && j < minh.size()) {
        if (ngoc[i] == minh[j]) {
            // Each eats their own candy.
            ++i;
            ++j;
            ++ngocEats;
            ++minhEats;
        } else if (beats(ngoc[i], minh[j])) {
            // Ngoc eats Minh's losing candy.
            ++j;
            ++ngocEats;
        } else {
            // Minh eats Ngoc's losing candy.
            ++i;
            ++minhEats;
        }
    }

    // The owner eats all candies remaining in their line.
    ngocEats += ngoc.size() - i;
    minhEats += minh.size() - j;

    cout << ngocEats << '\n';
    cout << minhEats << '\n';
}