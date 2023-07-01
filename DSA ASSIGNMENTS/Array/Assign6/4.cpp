#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
int findMaxLength(vector<int>& nums) {
      int ans=0;
      int sum=0;
      unordered_map<int,int> map;
      for(int i=0;i<nums.size();i++){
        if(nums[i]==0)
        nums[i]=-1;
      } 
      for(int i=0;i<nums.size();i++){
        sum=sum+nums[i];
        if(sum==0){
          ans=max(ans,i+1);
        }
        else if(map.find(sum)!=map.end())
        ans=max(ans,i-map[sum]);
        else{
          map[sum]=i;
        }
      }
      return ans;
    }
int main(){
    vector<int> nums={1,0,1};
    cout<<findMaxLength(nums)<<endl;
    return 0;
}