#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool sameFirstLast(string value){
        return value[0] == value[value.size() - 1];
}
int main(){
    int n;
    cin >> n;
   int counter = 0;
   for(int i = 0; i < n; i++){
        string value;
        cin >> value;
        if(sameFirstLast(value)){
            counter++;
        }
   }
   cout << counter;
}

