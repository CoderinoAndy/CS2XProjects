#include <string>
#include <vector>
#include <iostream>
#include <cctype>
using namespace std;

int main(){
    int n;
    string code;
    string output = "";
    int sum = 0;
    string number = "";

    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> code;
        for(int j = 0; j < code.size(); j++){
            if(isupper(code[j])){
                output += code[j];
            } else if((isdigit(code[j]) && isdigit(code[j + 1])) || code[j] == '-'){
                number += code[j]; // generating the multidigit number
            } else if(isdigit(code[j]) && !isdigit(code[j + 1])){
                // edge of a number
                number += code[j];
                sum += stoi(number);
                number = "";
            }
        }
        cout << output << sum << '\n';
        output = "";
        sum = 0;
    }
}