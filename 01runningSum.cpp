#include <iostream>
#include <vector>
using namespace std;

void RunningSum(vector<int>& nums, int size){
    int sum = 0;
    // for(int i = 0; i < size; i++){
    //     sum = sum + nums[i];
    //     nums[i] = sum;
    // }
    
    for(int &val: nums){
        sum = sum + val;
        val = sum;
    }

    for(int i = 0; i < size; i++){
        cout << nums[i] << " ";
    }
}

int main(){
    vector<int> nums = {1,2,3,4,5};

    RunningSum(nums, 5);
}