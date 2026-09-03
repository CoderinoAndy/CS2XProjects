#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
using namespace std;

int main(){
    // initial init
    int quarters;
    int lp1;
    int lp2;
    int lp3;
    cin >> quarters;
    cin >> lp1;
    cin >> lp2;
    cin >> lp3;
    // It should be noted:
    // slot 1 --> 30 quarters / 35 times played
    // slot 2 --> 60 quarters / 100 times played
    // slot 3 --> 9 quarters / 10 times played
    int count = 0;
    while(quarters > 0){
        ++lp1;
        --quarters;
        ++count;
        if(lp1 == 35){
            quarters += 30;
            lp1 = 0;
        }
        if(quarters == 0){
            break;
        }

        ++lp2;
        --quarters;
        ++count;
        if(lp2 == 100){
            quarters += 60;
            lp2 = 0;
        }
        if(quarters == 0){
            break;
        }

        ++lp3;
        --quarters;
        ++count;
        if(lp3 == 10){
            quarters += 9;
            lp3 = 0;
        }
        if(quarters == 0){
            break;
        }
    }
    cout << "Martha plays " << count << " times before going broke.";
}
