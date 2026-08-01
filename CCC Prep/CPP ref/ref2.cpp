#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <functional>
#include <queue>
#include <sstream>

using namespace std;
int main(){
    // string slicing
    string original_string;
    cin >> original_string;
    string result = original_string.substr(5, 10);
    cout << result;

    // splitting a string
    string text = "apple,banana,cherry,carrot";
    stringstream ss(text);
    string token;
    vector<string> tokens;
    while (getline(ss, token, ",")){
        tokens.push_back(token);
    }
}