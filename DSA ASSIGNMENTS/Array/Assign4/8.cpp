#include<iostream>
#include<vector>
using namespace std;
vector<int> shuffle(vector<int>& nums, int n) {
       vector<int> ans;
       for(int j=0;j<n;j++){
           ans.push_back(nums[j]);
           ans.push_back(nums[n+j]);
       }
        return ans;
    }
int main(){
    int n=2;
    vector<int> nums={1,4,3,2};
    vector<int> ans=shuffle(nums,n);
    for(int a: ans)
    cout<<a<<" ";
    return 0;
}