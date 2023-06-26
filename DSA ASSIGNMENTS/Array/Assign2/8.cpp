#include<iostream>
#include<vector>
#define INT_MAX 999;
#define INT_MIN -999;
using namespace std;
int smallestRangeI(vector<int>& nums, int k) {
        int max=INT_MIN;
        int min=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(max<nums[i])
            max=nums[i];
            if(min>nums[i])
            min=nums[i];
        }
       
        if(max-min<=2*k)
        return 0;
        else
        return max-min-2*k;
    }
    int main(){
        int k=3;
    vector<int> nums={1,3,6};
    cout<<smallestRangeI(nums,k)<<endl;
    return 0;
}