#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;



int main(){
    // rectangle definitions
    int outwidth;
    int outheight;
    cin >> outwidth;
    cin >> outheight;
    int inwidth;
    int inheight;
    cin >> inwidth;
    cin >> inheight;
    int steps;
    cin >> steps;

    // attempt to create boundaries
    vector<pair<int, int>> boundaries;
    // top left
    for(int column = 1; column <= inwidth; ++column){
        for(int row = 1; row <= inheight; ++row){
            boundaries.push_back(make_pair(column, row));
        }
    }
    // bottom left
    for(int column = 1; column <= inwidth; ++column){
        for(int row = outheight - inheight + 1; row <= outheight; ++row){
            boundaries.push_back(make_pair(column, row));
        }
    }
    // top right
    for(int column = outwidth - inwidth + 1; column <= outwidth; ++column){
        for(int row = 1; row <= inheight; ++row){
            boundaries.push_back(make_pair(column, row));
        }
    }
    // bottom right
    for(int column = outwidth - inwidth + 1; column <= outwidth; ++column){
        for(int row = outheight - inheight + 1; row <= outheight; ++row){
            boundaries.push_back(make_pair(column, row));
        }
    }
    // boundary testing:
    // int count = boundaries.size();
    // for(const auto& element : boundaries){
    //     cout << "(" << element.first << ", " << element.second << ")" << "\n";
    // }

    // starting position intialization
    int x = inwidth + 1;
    int y = 1;
    int mode = 0;
    // helper function
    auto blocked = [&](int nx, int ny) {
        if (nx < 1 || nx > outwidth || ny < 1 || ny > outheight) {
            return true;
        }
        return find(boundaries.begin(), boundaries.end(), make_pair(nx, ny))
            != boundaries.end();
    };
    // beginning movement
    boundaries.push_back(make_pair(x, y));
    while(steps > 0){
        if(blocked(x + 1, y) && blocked(x, y + 1) && blocked(x - 1, y) && blocked(x, y - 1)){
            break;
        }
        if(mode == 0){
            if(!blocked(x + 1, y)){
                x += 1;
                steps -= 1;
                boundaries.push_back(make_pair(x, y));
            } else if(!blocked(x, y + 1)){
                y += 1;
                steps -= 1;
                boundaries.push_back(make_pair(x, y));
            } else {
                mode = (mode + 1) % 4;
                continue;
            }
        } else if(mode == 1){
            if(!blocked(x, y + 1)){
                y += 1;
                steps -= 1;
                boundaries.push_back(make_pair(x, y));
            } else if(!blocked(x - 1, y)){
                x -= 1;
                steps -= 1;
                boundaries.push_back(make_pair(x, y));
            } else {
                mode = (mode + 1) % 4;
                continue;
            }
        } else if(mode == 2){
            if(!blocked(x - 1, y)){
                x -= 1;
                steps -= 1;
                boundaries.push_back(make_pair(x, y));
            } else if(!blocked(x, y - 1)){
                y -= 1;
                steps -= 1;
                boundaries.push_back(make_pair(x, y));
            } else {
                mode = (mode + 1) % 4;
                continue;
            }
        } else if(mode == 3) {
            if(!blocked(x, y - 1)){
                y -= 1;
                steps -= 1;
                boundaries.push_back(make_pair(x, y));
            } else if(!blocked(x + 1, y)){
                x += 1;
                steps -= 1;
                boundaries.push_back(make_pair(x, y));
            } else {
                mode = (mode + 1) % 4;
                continue;
            }
        }
    }
    cout << x << '\n' << y;
}
