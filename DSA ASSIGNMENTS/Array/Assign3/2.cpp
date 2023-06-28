#include<iostream>
#include<vector>
#define INT_MAX 999
#define INT_MIN -999
#include<algorithm>
using namespace std;
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int s=j+1;
                int e=nums.size()-1;
                while(s<e){
                    long long sum = static_cast<long long>(nums[i]) + nums[j] + nums[s] + nums[e];  // Use long long to handle large sums
                    if(sum==target){
                        ans.push_back({nums[i],nums[j],nums[s],nums[e]});
                        while(s<e && nums[s]==nums[s+1])s++;
                        while(s<e && nums[e]==nums[e-1])e--;
                        s++;
                        e--;
                    }
                    else if(sum<target)
                    s++;
                    else
                    e--;
            }
            while(j+1<nums.size() && nums[j]==nums[j+1])j++;
        }
        while(i+1<nums.size() && nums[i]==nums[i+1])i++;
    }
    return ans;
    }
int main(){
    int target=0;
    vector<int> nums={1,0,-1,0,-2,2};
    vector<vector<int>> ans=fourSum(nums,target);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;    
    }
    return 0;
}