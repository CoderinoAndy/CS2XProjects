#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

int main(){
    int drops;
    cin >> drops;

    int xmin = 1000;
    int ymin = 1000;
    int xmax = 0;
    int ymax = 0;
    int x, y;

    for(int N = 0; N < drops; N++){
        string coordinate;
        cin >> coordinate;
        stringstream ss(coordinate);
        string xToken;
        string yToken;

        getline(ss, xToken, ',');
        getline(ss, yToken);
        x = stoi(xToken);
        y= stoi(yToken);
        xmin = min(xmin, x);
        xmax = max(xmax, x);
        ymax = max(ymax, y);
        ymin = min(ymin, y);
    }

    cout << xmin - 1 << ',' << ymin - 1 << '\n';
    cout << xmax + 1 << ',' << ymax + 1 << '\n';
}