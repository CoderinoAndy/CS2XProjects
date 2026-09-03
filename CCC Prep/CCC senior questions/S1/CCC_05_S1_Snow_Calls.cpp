#include <unordered_map>
#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main(){
    // init
    int cases;
    cin >> cases;
    vector<string> numbers;
    string number;
    for(int i = 0; i < cases; ++i){
        cin >> number;
        erase(number, '-');
        numbers.push_back(number);
    }

    int count = 0;
    string output;
    auto converter = [](string character){
        unordered_map<string, int> my_dict = {
            {"A", 2},{"B", 2},{"C", 2},
            {"D", 3},{"E", 3},{"F", 3},
            {"G", 4},{"H", 4}, {"I", 4},
            {"J", 5},{"K", 5},{"L", 5},
            {"M", 6},{"N", 6},{"O", 6},
            {"P", 7}, {"Q", 7}, {"R", 7}, {"S", 7}, 
            {"T", 8},{"U", 8}, {"V", 8},
            {"W", 9}, {"X", 9},{"Y", 9}, {"Z", 9},
        };
        return(my_dict[character]);
    };
    for(const auto& testcase : numbers){
        for(const auto& character : testcase){
            count += 1;
            if(count > 10){
                break;
            }
            if(count == 4 || count == 7){
                output += '-';
            }
            if(isdigit(character)){
                output += string(1, character);
            } else{
                output += to_string(converter(string(1, character)));
            }
        }
        cout << output << '\n';
        output = "";
        count = 0;
    }
}