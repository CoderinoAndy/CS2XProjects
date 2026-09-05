#include <bits/stdc++.h>
using namespace std;

int main(){
    int numerator;
    int denominator;
    cin >> numerator;
    cin >> denominator;

    auto simplify = [](int x, int y){
        int greatest = 0;
        if(x <= y){
            for(int i = 2; i <= ceil(y / 2); ++i){
                if(x % i == 0 && y % i == 0 && i > greatest){
                    greatest = i;
                }
            }
        } else {
            for(int i = 2; i <= ceil(x / 2); ++i){
                if(x % i == 0 && y % i == 0 && i > greatest){
                    greatest = i;
                }
            }
        }
        if(greatest != 0){
            x = x/greatest;
            y = y/greatest;
            return make_pair(x, y);
        } else {
            return make_pair(0, 0);
        }
    };
    if(numerator == 0){
        cout << 0;
    } else if(numerator == denominator) {
        cout << 1;
    } else if(numerator < denominator){
        int simplenumerator = simplify(numerator, denominator).first;
        int simpledenominator = simplify(numerator, denominator).second;
        if(simplenumerator == 0){ // no simplification needed
            cout << numerator << '/' << denominator << '\n';
        } else { // simplification occured; send the new ones!
            cout << simplenumerator << '/' << simpledenominator << '\n';
        }
    } else if(numerator % denominator == 0) {
        cout << static_cast<int>(floor(numerator/denominator)) << '\n';
    } else {
        int bigresult = static_cast<int>(floor(numerator/denominator));
        int leftover = numerator - bigresult*(denominator);
        numerator = leftover;
        // denominator = denominator; it stays the same
        int simplenumerator = simplify(numerator, denominator).first;
        int simpledenominator = simplify(numerator, denominator).second;
        if(simplenumerator == 0){ // no simplification needed
            cout << bigresult << ' ' << numerator << '/' << denominator << '\n';
        } else { // simplification occured; send the new ones!
            cout << bigresult << ' ' << simplenumerator << '/' << simpledenominator << '\n';
        }
    }
}