#include <iostream>
#include <string>
using namespace std;

int main() {
    int numberOfLines;
    cin >> numberOfLines;

    for (int i = 0; i < numberOfLines; i++) {
        string value;
        cin >> value;

        int counter = 1;

        for (int j = 1; j < static_cast<int>(value.size()); j++) {
            if (value[j - 1] == value[j]) {
                counter++;
            } else {
                cout << counter << " " << value[j - 1] << " ";
                counter = 1;
            }
        }

        cout << counter << " " << value.back() << "\n";
    }

    return 0;
}
