#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans=ans^nums[i];
        }
        return ans;
    }
int main(){
    vector<int> nums={3,2,2,3,10,8,8};
    cout<<singleNumber(nums)<<endl;
    return 0;
}