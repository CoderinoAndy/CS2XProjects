#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    int initstreams;
    cin >> initstreams;
    vector<double> flows;
    int flow;
    for(int i = 0; i < initstreams; ++i){
        cin >> flow;
        flows.push_back(flow);
    }
    int input;
    int targetstream;
    int splitpercent;
    while(true){
        cin >> input;
        if(input == 77){
            break;
        } else if(input == 99){
            cin >> targetstream;
            cin >> splitpercent;
            double original = flows[targetstream - 1];
            double left = original * splitpercent / 100.0;
            double right = original - left;
            flows[targetstream - 1] = left;
            flows.insert(flows.begin() + targetstream, right);
        } else if(input == 88){
            cin >> targetstream;
            flows[targetstream - 1] = flows[targetstream - 1] + flows[targetstream];
            flows.erase(flows.begin() + (targetstream));
        }
    }
    for(const auto& stream : flows){
        cout << round(stream) << ' ';
    }
}