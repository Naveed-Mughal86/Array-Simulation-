#include <iostream>
#include <vector>
using namespace std;

void ShuffleNums(vector<int>& nums, int n){
    vector<int> ans;
    for(int i = 0; i < n; i++){
        ans.push_back(nums[i]);
        ans.push_back(nums[i + n]);
    }
    for(int i = 0; i < ans.size();i++){
        cout << ans[i] << " ";
    }
}

int main(){
    
    vector<int> nums = {2,5,1,3,4,7};
    int n = nums.size() / 2;
    ShuffleNums(nums, n);
}