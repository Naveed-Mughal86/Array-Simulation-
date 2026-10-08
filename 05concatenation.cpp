#include <iostream>
#include <vector>
using namespace std;

void concatenation(vector<int> nums, vector<int> ans){
    for(int i = 0; i < nums.size(); i++){
        ans[i] = nums[i];
        ans[i + nums.size()] = nums[i];
        
    }
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}

int main(){
    vector<int> nums = {1,2,1};
    vector<int> ans(2 * nums.size());

    concatenation(nums, ans);

}