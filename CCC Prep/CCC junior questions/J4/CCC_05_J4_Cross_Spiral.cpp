// This one looks really hard... we ball anyway!
#include <iostream>
#include <string>
#include <vector>
#include <utility>
using namespace std;

int main(){
    int outlineW;
    cin >> outlineW;
    int outlineH;
    cin >> outlineH;
    int cutoutW;
    cin >> cutoutW;
    int cutoutH;
    cin >> cutoutH;
    int steps;
    cin >> steps;

    int column  = outlineW - (2*cutoutW);
    int row = 1;

    vector<pair<int><int>> boundaries;
    // constructing boundary coordinates
    int x;
    int y;
   for(int x = 1; x < outlineW; ++x){
        for(int y = 1; y < outlineH; ++y){
            if(x <= cutoutW && y <= cutoutH){
                boundaries.push_back(make_pair(x, y));
                // This will form the top left boundary
            } else if(x >= (outlineW - cutoutW) && (y <= cutoutH)) {
                boundaries.push_back(make_pair(x, y));
                // this will form the top right boundary
            } else if(x <= cutoutW && (y >= (outlineH - cutoutH))){
                boundaries.push_back(make_pair(x, y));
                // this will form the bottom left boundary
            } else if(x >= (outlineW - cutoutW) && (y >= (outlineH - cutoutH))){
                boundaries.push_back(make_pair(x, y));
                // this will form the bottom right boundary
            }
        }
   }
   x = 1;
   y = outlineW - (2*cutoutW);
   pair<int><int> coordinate;
   int count = 0;
   while(true){
        coordinate = {x, y};
        while(true){
            coordinate = {x, y};
            if(boundaries.contains(coordinate) || x > outlineW){
                x -= 1;
                y += 1;
            } else if((x + 1 > outlineW) && (y + 1 == outlineH - cutoutH)){
                break;
            } else {
                x += 1;
                count += 1;
                if(count == steps){
                    break;
                }
            }
            boundaries.push_back(coordinate);
        }
        if(count == steps){
            break;
        }
        while(true){
            coordinate = {x, y};
            if(boundaries.contains(coordinate || y > outlineH)){
                y += 1;
                x -= 1;
            } else if((y + 1) > outlineH && (x + 1 == cutoutW)){
                break;
            } else {
                y -= 1;
                count += 1;
                if(count == steps){
                    break;
                }
            }
        }
        if(count == steps){
            break;
        }
         while(true){
            coordinate = {x, y};
            if(boundaries.contains(coordinate || x == 0)){
                y -= 1;
                x += 1;
            } else if((x - 1) == 0 && (y - 1 == cutoutH)){
                break;
            } else {
                x -= 1;
                count += 1;
                if(count == steps){
                    break;
                }
            }
        }
        if(count == steps){
            break;
        }
        while(true){
            coordinate = {x, y};
            if boundaries.contains(coordinate){
                y -= 1;
                x += 1;
            } else if(){

            } else {
                y += 1;
                count += 1;
                if(count == steps){
                    break;
                }
            }
        }
        if(count == steps){
            break;
        }
   }
   cout << coordinate.first << '\n' << coordinate.second;
}