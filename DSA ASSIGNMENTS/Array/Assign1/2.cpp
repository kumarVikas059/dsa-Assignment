#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (map.find(complement) != map.end()) {
                return { map[complement], i };
            }
            map[nums[i]] = i;
        }
        return {}; 
}
int main(){
    int target=6;
    vector<int> nums={3,3};
    vector<int> result=twoSum(nums,target);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<endl;
    }
    return 0;
}