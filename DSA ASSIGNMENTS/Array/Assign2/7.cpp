#include<iostream>
#include<vector>
using namespace std;
bool isInc(vector<int>& nums){
        for(int i=0;i+1<nums.size();i++){
            if(nums[i]>nums[i+1])
            return false;
        }
        return true;
    }
    bool isDec(vector<int>& nums){
        for(int i=0;i+1<nums.size();i++){
            if(nums[i]<nums[i+1])
            return false;
        }
        return true;
    }
    bool isMonotonic(vector<int>& nums) {
       
        return isInc(nums) || isDec(nums);
    }
int main(){
    
    vector<int> nums={1,2,2,3};
    cout<<isMonotonic(nums)<<endl;
    return 0;
}