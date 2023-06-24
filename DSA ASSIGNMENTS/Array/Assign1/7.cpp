#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
void moveZeroes(vector<int>& nums) {
        int p=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[p],nums[i]);
                p++;
            }
        }
    }
int main(){
    vector<int> nums={0,0,1,2,0,3,0,0,0,4};
    moveZeroes(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<endl;
    }
    return 0;
}