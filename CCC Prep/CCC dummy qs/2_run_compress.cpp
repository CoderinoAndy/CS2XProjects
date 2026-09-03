#include <iostream>
#include <cctype>
#include <string>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> codes; 
    string code;
    for(int i = 0; i < n; ++i){
        cin >> code;
        codes.push_back(code);
    }
    string output;
    int count = 1;
    for(const auto& code : codes){
        for(int i = 0; i < code.size() - 1; ++i){
            if(code[i] == code[i + 1]){
                count += 1;
            } else if(count > 1){
                output += code[i];
                output += to_string(count);
                count = 1;
            } else {
                output += code[i];
            }
        }
        if((code[code.size() - 1] != code[code.size() - 2]) && count == 1){
            output += code[code.size() - 1];
        } else if(count > 1){
            output += code[code.size() - 1];
            output += to_string(count);
        }
        cout << output << '\n';
        output = "";
        count = 1;
    }
}