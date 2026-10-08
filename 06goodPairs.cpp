#include <iostream>
#include <vector>
using namespace std;

void GoodPairs(vector<int>& nums){
    for(int i = 0; i < nums.size(); i++){
        for(int j = 0; j < nums.size(); j++){
            if(i < j && nums[i] == nums[j]){
                cout << i << " " << j  << endl;
            }
        }
    }
}

int main(){
    vector<int> nums = {1,2,3,1,1,3};
    GoodPairs(nums);
}