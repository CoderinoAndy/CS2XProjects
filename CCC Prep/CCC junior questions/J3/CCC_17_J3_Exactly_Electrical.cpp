#include <iostream>
#include <string>

using namespace std;

int main(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;

    int battery;
    cin >> battery;

    int xdiff = abs(x2 - x1);
    int ydiff = abs(y2 - y1);
    // Basically, this is the minimum amount of battery that can be used
    // however, this would be suitable only if we were trying to find out the min; 
    // instead we're trying to find out whether or not we can use up all of the battery
    // Thus I would believe this to be something related to factors? If you can go in circles, etc.

    int mindist = xdiff + ydiff;
    // catch the case if we literally can't make it
    if(battery < mindist){
        cout << 'N';
    } else if ((battery - mindist) == 0){
        cout << 'Y';
    } else if ((battery - mindist) % 2 == 0){
        // This means it can just circle/uturn continuously until it gets back... I hope this is the right logic.
        cout << 'Y';
    } else {
        cout << 'N';
    }
}