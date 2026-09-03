#include <iostream>
#include <string>
using namespace std;

int main(){
    // PINK --> 1st
    // GREEN --> 2nd
    // RED --> 3rd
    // ORANGE --> 4th

    int pink;
    int green;
    int red;
    int orange;
    int target;
    cin >> pink;
    cin >> green;
    cin >> red;
    cin >> orange;
    cin >> target;

    int combos = 0;
    int minticket = target;
    for(int p = 0; p <= target; ++p){
        for(int g = 0; g <= target; ++g){
            for(int r = 0; r <= target; ++r){
                for(int o = 0; o <= target; ++o){
                    if(p*pink + g*green + r*red + o*orange == target){
                        cout << "# of PINK is " << p << " # of GREEN is " << g << " # of RED is " << r << " # of ORANGE is " << o << '\n';
                        ++combos;
                        if(p + g + r + o < minticket){
                            minticket = p + g + r + o;
                        }
                    }
                }
            }
        }
    }
    cout << "Total combinations is " << combos << '.' << '\n';
    cout << "Minimum number of tickets to print is " << minticket << '.';
}