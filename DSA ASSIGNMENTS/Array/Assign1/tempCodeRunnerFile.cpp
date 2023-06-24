#include<iostream>
#include<vector>
using namespace std;
int removeElement(vector<int>& nums, int val) {
       for(int i=0;i<nums.size();i++){
           if(nums[i]==val){
             nums.erase(nums.begin()+i);
              i--; 
           }
           
       }
       return nums.size(); 
}
int main(){
    int val=3;
    vector<int> nums={3,2,2,3};
    cout<<removeElement(nums,val)<<endl;
    return 0;
}