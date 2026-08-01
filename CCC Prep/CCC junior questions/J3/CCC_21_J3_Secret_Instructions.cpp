#include <string>
#include <iostream>
using namespace std;

int main(){
    string instruction;
    string previousDirection;
    int direction = 0;
    while(true){
        cin >> instruction;
        if(instruction == "99999"){
            break;
        }
        direction = instruction[0] - '0' + instruction[1] - '0';
        if(direction == 0){
            cout << previousDirection << instruction.substr(2) << '\n';
        } else if (direction % 2 == 0){
            cout << "right " << instruction.substr(2) << '\n';
            previousDirection = "right "; 
        } else {
            cout << "left " << instruction.substr(2) << '\n';
            previousDirection = "left ";
        }
    }
}
