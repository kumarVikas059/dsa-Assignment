#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        int duplicate=-1;
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            if(s.count(nums[i])>0)
            {
                duplicate=nums[i];
            }
            s.insert(nums[i]);
        }
        for(int i=1;i<=nums.size();i++){
            if(s.count(i)==0)
            {
                ans.push_back(duplicate);
                ans.push_back(i);
                break;
            }

        }
        return ans;
    }
int main(){
    vector<int> nums={1,2,2,4};
    vector<int> result=findErrorNums(nums);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<endl;
    }
    return 0;
}