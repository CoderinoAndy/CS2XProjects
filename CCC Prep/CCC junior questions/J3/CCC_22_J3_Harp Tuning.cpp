#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    string tune;
    string output;
    int i = 0;
    cin >> tune;
    while(i < tune.size()){
        output = "";
        while(isalpha(tune[i])){
            output += tune[i];
            i += 1;
        }
        if(tune[i] == '-'){
            output += " loosen ";
            i += 1;
        } else {
            output += " tighten ";
            i += 1;
        }
        while(isdigit(tune[i])){
            output += tune[i];
            i += 1;
        }
        cout << output << '\n';
    }
}