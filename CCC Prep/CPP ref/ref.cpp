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
    int rows;
    int cols;
    cin >> rows >> cols;
    auto matrix = vector<vector<int>>(rows, vector<int>(cols));
    vector<vector<int>> matrix(rows, vector<int>(cols));
    // Reading a mtrix
    cout << matrix[1][2];
    for (int r = 0; r < rows; r++){
        for(int c = 0; c < cols; c++){
            cin >> matrix[r][c];
            //or
            cout << matrix[r][c];
        }
    }
}