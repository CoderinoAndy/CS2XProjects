// first J4 ever
#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string header;
    getline(cin, header);
    string code;
    string cleanCode = "";
    getline(cin, code);

    // cleaning
    for(int i = 0; i < code.size(); ++i){
        if(isalpha(code[i])){
            cleanCode += code[i];
        }
    }

    string characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int increment;
    for(int i = 0; i < cleanCode.size(); ++i){
        for(int f = 0; f < header.size(); ++f){
            if(i % header.size() == f){
                increment = characters.find(header[f]);
                cleanCode[i] = characters[(characters.find(cleanCode[i]) + increment) % 26];
            }
        }
    }
    cout << cleanCode;
}