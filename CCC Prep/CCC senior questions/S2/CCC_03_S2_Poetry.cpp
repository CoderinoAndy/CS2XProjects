#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    cin.ignore();
    int counter = 0;
    vector<vector<string>> verses;
    vector<string> verse;
    string line;
    for(int i = 0; i < 4*n; ++i){
        getline(cin, line);
        verse.push_back(line);
        counter += 1;
        if(counter == 4){
            verses.push_back(verse);
            verse = {};
            counter = 0;
        }
    }
    auto rhyme = [&](string word1, string word2){
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        string lastsyllable1;
        string lastsyllable2;
        bool vowelfound1 = false;
        bool vowelfound2 = false;
        for(int i = word1.size() - 1; i >= 0; --i){
            if(i == word1.size() - 1 && vowels.contains(word1[i])){
                vowelfound1 = true;
                lastsyllable1 = word1[i];
                break;
            }
            if(vowels.contains(word1[i])){
                vowelfound1 = true;
                lastsyllable1 = word1.substr(i, word1.size() - (i));
                break;
            }
        }
        for(int i = word2.size() - 1; i >= 0; --i){
            if(i == word2.size() - 1 && vowels.contains(word2[i])){
                vowelfound2 = true;
                lastsyllable2 = word2[i];
                break;
            }
            if(vowels.contains(word2[i])){
                vowelfound2 = true;
                lastsyllable2 = word2.substr(i, word2.size() - (i));
                break;
            }
        }
        if(!vowelfound1){
            lastsyllable1 = word1;
        }
        if(!vowelfound2){
            lastsyllable2 = word2;
        }
        for(auto& character : lastsyllable2){
            character = tolower(character);
        }
        for(auto& character : lastsyllable1){
            character = tolower(character);
        }
        
        if(lastsyllable1 == lastsyllable2){
            return true;
        } else {
            return false;
        }
    };
    vector<string> lastwords;
    for(const auto& verse : verses){
        for(const auto& line : verse){
            bool lastwordfound = false;
            for(int i = line.size() - 1; i >= 0; --i){
                if(line[i] == ' '){
                    lastwords.push_back(line.substr(i + 1, line.size() - (i + 1)));
                    lastwordfound = true;
                    break;
                }
            }
            if(!lastwordfound){
                lastwords.push_back(line);
            }
        }
        if(rhyme(lastwords[0], lastwords[1]) && rhyme(lastwords[1], lastwords[2])
        && rhyme(lastwords[2], lastwords[3])){
            cout << "perfect" << '\n';
        } else if(rhyme(lastwords[0], lastwords[1]) && rhyme(lastwords[2], lastwords[3])){
            cout << "even" << '\n';
        } else if(rhyme(lastwords[0], lastwords[2]) && rhyme(lastwords[1], lastwords[3])){
            cout << "cross" << '\n';
        } else if(rhyme(lastwords[0], lastwords[3]) && rhyme(lastwords[1], lastwords[2])){
            cout << "shell" << '\n';
        } else {
            cout << "free" << '\n';
        }
        lastwords = {};
    }
}