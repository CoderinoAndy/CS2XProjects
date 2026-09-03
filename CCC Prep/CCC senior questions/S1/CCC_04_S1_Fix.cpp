#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int collections;
    string input;
    cin >> collections;
     // vector of vectors?
    vector<vector<string>> collectionList;
    vector<string> temp;
    // attempting to construct collection list
    for(int i = 1; i <= collections*3; ++i){
        cin >> input;
        temp.push_back(input);
        if(i % 3 == 0){
            collectionList.push_back(temp);
            temp = {};
        }
    }
    int outerpos = 0;
    int innerpos = 0;
    bool switchy = true;
    for(auto const& collection : collectionList){
        for(auto const& word : collection){
            outerpos += 1;
            for(auto const& word2 : collection){
                innerpos += 1;
                if((word.starts_with(word2) || word.ends_with(word2)) && (innerpos != outerpos)){
                    switchy = false;
                }
            }
            innerpos = 0;
        }
        outerpos = 0;
        if(switchy){
            cout << "Yes" << '\n';
        } else {
            cout << "No" << '\n';
        }
        switchy = true;
    }
}