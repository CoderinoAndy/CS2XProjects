#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
#include <numeric>
using namespace std;

int main(){
    vector<int> scores;
    int n;
    int score;

    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> score;
        scores.push_back(score);
    }
    erase(scores, ranges::max(scores));
    erase(scores, ranges::max(scores));
    cout << ranges::max(scores) << ' ' << count(scores.begin(), scores.end(), ranges::max(scores));
}