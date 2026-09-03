#include <iostream>
#include <string>
using namespace std;

int main(){
    // two or more uppercase (anywhere) --> no lowercase allowed
    // all lowercase --> no uppercase allowed
    string alice;
    string bob;
    cin >> alice;
    cin >> bob;


    int uppercountalice = 0;
    int uppercountbob = 0;
    string index = "";
    for(int i = 0; i < 10; ++i){
        if(isupper(alice[i])){
            uppercountalice += 1;
        }
        if(isupper(bob[i])){
            uppercountbob += 1;
        }
        if((i + 1) % 2 == 0){
            if((uppercountalice == 2) || (uppercountbob == 2)){
                // case where we have two or more dominant genes in the mix
                index += 'U';
            } else if(uppercountalice + uppercountbob == 0){
                // case where we have no dominant genes in the mix
                index += 'L';
            } else {
                // case where we have 1 dominant gene in the mix
                index += 'X';
            }
            // reset for the next pair
            uppercountalice = 0;
            uppercountbob = 0;
        }
    }
    int babies;
    string baby;
    bool isbaby = true;
    cin >> babies;
    for(int x = 0; x < babies; ++x){
        cin >> baby;
        for(int y = 0; y < 5; ++y){
            if(isupper(baby[y]) && (index[y] == 'L')){
                cout << "Not their baby!" << '\n';
                isbaby = false;
                break;
            } else if(islower(baby[y]) && (index[y]) == 'U'){
                cout << "Not their baby!" << '\n';
                isbaby = false;
                break;
            }
        }
        if(isbaby){
            cout << "Possible baby." << '\n';
        }
        isbaby = true;
    }
}