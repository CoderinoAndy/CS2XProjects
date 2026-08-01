#include <sstream>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

// A school festival has several booths. Each booth records its name and the number of visitors it received.
// Each record is written in the following format: NAME:VISITORS - For example: GAMES:42
// A booth is considered popular when its visitor count is greater than or equal to the average visitor count among all booths.
// Determine which booths are popular. The first line contains an integer N, the number of booths.
// Each of the next N lines contains: NAME:VISITORS
// Output the names of all popular booths, one per line, in the same order they appeared in the input.
// Afterward, output: Popular booths: K, Where K is the number of Popular booths


int main(){
    int BoothAmount;
    cin >> BoothAmount;
    vector<string> booths;
    string input;
    for(int n = 0; n < BoothAmount; ++n){
        cin >> input;
        booths.push_back(input);
    }
    float average = 0;
    for(const auto& element : booths){
        average += stoi(element.substr(element.find(':') + 1));
    }
    average = average/BoothAmount;
    int k = 0;
    for(const auto& element : booths){
        if(stoi(element.substr(element.find(':') + 1)) >= average){
            cout << element.substr(0, element.find(':')) << '\n';
            k += 1;
        }
    }
    cout << "Popular booths: " << k;
}