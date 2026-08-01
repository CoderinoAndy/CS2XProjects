#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int ab;
    int bc;
    int cd;
    int de;
    cin >> ab >> bc >> cd >> de;

    vector<int> cities = {0, ab, ab + bc, ab + bc + cd, ab + bc + cd + de};

    vector<vector<int>> matrix(5, vector<int>(5));
    int distance;
    for(int citya = 0; citya < 5; citya++){
        for(int cityb = 0; cityb < 5; cityb++){
            distance = abs(cities[citya] - cities[cityb]);
            matrix[citya][cityb] = distance;
        }
    }
    for(int a = 0; a < 5; a++){
        for(int b = 0; b < 5; b++){
            cout << matrix[a][b] << " ";
        }
        cout << "\n";
    }
}