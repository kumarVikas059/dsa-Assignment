#include<iostream>
#include<vector>
#define INT_MAX 999;
#define INT_MIN -999;
#include<algorithm>
using namespace std;
int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int diff=INT_MAX;
        int ans;
        for(int i=0;i<nums.size();i++){
          int j=i+1;
          int k=nums.size()-1;
          while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
              if(abs(target-sum)<diff){
                  diff=abs(target-sum);
                  ans=sum; 
              }
              if(sum<=target)j++;
              else k--;
          }
        }
        return ans;
}
int main(){
    int target=1;
    vector<int> nums={-1,2,1,-4};
    cout<<threeSumClosest(nums,target)<<endl;
    return 0;
}