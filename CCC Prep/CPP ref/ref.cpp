#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <functional>
#include <queue>

using namespace std;
int main(){
    // for loop vector appending
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    // for loop iterating through elements
    vector<int> hello = {"banana", "apple", "berry", "cherry"};
    for(const auto& element : hello){
        cout << element;
    }

    // sorting ascending
    sort(nums.begin(), nums.end());
    // sorting descending
    sort(nums.begin(), nums.end(), greater<int>());

    // Removing elements
    // Removing a single element
    nums.erase(nums.begin() + i);
    // Removing a sub-vector of elements
    nums.erase(nums.begin() + start, nums.begin() + end);

    // queues for BFS questions
    int a;
    int b;
    cin >> a;
    cin >> b;
    queue<pair<int, int>> q;
    q.push({a, b});
    auto [a, b] = q.front();
    q.pop();

    // Creating a matrix
    auto matrix = vector<vector<int>>(5, vector<int>(5));
    // Reading a mtrix
    for (int r = 0; r < 5; r++){
        for(int c = 0; c < 5; c++){
            cin >> matrix[r][c];
            //or
            cout << matrix[r][c];
        }
    }
}