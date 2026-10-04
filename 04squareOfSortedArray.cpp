#include <iostream>
#include <vector>
using namespace std;

void squareOfSortedArray(vector<int>& nums){
    // for(int i = 0; i < nums.size(); i++){
    //     nums[i] = nums[i] * nums[i];
    // }

    for(int &val : nums){
        val = val * val;
    }


    for(int i = 0; i < nums.size(); i++){
        for(int j = 0; j < nums.size() - i - 1; j++){
            if(nums[j] > nums[j + 1]){
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

        for(int val : nums){
        cout << val << " ";
    }
}

int main(){
    vector<int> nums = {-4,-1,0,3,10};
    squareOfSortedArray(nums);
}