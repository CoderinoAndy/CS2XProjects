#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main(){
    vector<int> frequency = {0, 0, 0, 0, 0};
    string available;
    int people;
    cin >> people;
    for(int i = 0; i < people; ++i){
        cin >> available;
        for(int n = 0; n < 5; ++n){
            if(available[n] == 'Y'){
                frequency[n] += 1;
            }
        }
    }
    int largest = 0;
    for(int i = 0; i < 5; ++i){
        if(frequency[i] > largest){
            largest = frequency[i];
        }
    }
    bool comma = false;
    string output = "";
    for(int i = 0; i < 5; ++i){
        if(largest == frequency[i]){
            output += to_string(i + 1);
            output += ',';
        }
    }
    output.erase(output.end() - 1);
    cout << output;
    return 0;
}