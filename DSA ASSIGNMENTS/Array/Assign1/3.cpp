#include<iostream>
#include<vector>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int mid=(s-e)/2+e;
        while(s<=e){
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                 e=mid-1;
            }
            else 
            s=mid+1;
            mid=(e-s)/2+s;
        }
        return s;
}
int main(){
    int target=7;
    vector<int> nums={1,3,5,6};
    cout<<searchInsert(nums,target)<<endl;
    return 0;
}