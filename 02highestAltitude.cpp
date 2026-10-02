#include <iostream>
#include <vector>
using namespace std;

void highestAltitude(vector<int> gain){
    gain.insert(gain.begin(),0);
    int currentAltitude = 0;
    for(int i = 0; i < gain.size(); i++){
        currentAltitude = currentAltitude + gain[i];
        gain[i] = currentAltitude;
    }
    int highest = INT_MIN;

    for(int i = 0; i < gain.size(); i++){
        cout << gain[i] << " ";
        highest = max(gain[i], highest);
    }
    cout << endl;
    cout << "Highest Altitude is " << highest << endl;
}

int main(){
    int size = 5;
    vector<int> gain = {-4,-3,-2,-1,4,3,2};

    highestAltitude(gain);
}