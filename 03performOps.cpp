#include <iostream>
#include <vector>
using namespace std;

// Find Value after performing operation

void valueByPerformingOps(vector<string>& operations){
    int x = 0;
    for(int i = 0; i < operations.size(); i++){
        if(operations[i] == "--x" || operations[i] == "x--"){
            x = x - 1;
        }
        else if(operations[i] == "++x" || operations[i] == "x++"){
            x = x + 1;
        }
    }
    cout << x;
}

int main(){
    vector<string> operations = {"--x","x++","x++"};
    valueByPerformingOps(operations);
}