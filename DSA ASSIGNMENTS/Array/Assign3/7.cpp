#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<string> summaryRanges(vector<int>& nums) {
    vector<string> ans;
    for(int i = 0; i < nums.size(); i++){
        int start = nums[i];
        while(i + 1 < nums.size() && nums[i + 1] == nums[i] + 1){
            i++;
        }
        
        int end = nums[i];
        
        if(start == end){
            ans.push_back(to_string(start));
        }
        else{
            ans.push_back(to_string(start) + "->" + to_string(end));
        }
    }
    return ans;
}
int main(){
    vector<int> nums={0,1,2,4,5,7};
    vector<string> ans=summaryRanges(nums);
    for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        cout<<endl;    
    }
   
    return 0;
}