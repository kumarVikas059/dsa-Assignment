#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.count(num) > 0) {
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
int main(){
    vector<int> nums={1,2,3,4};
    cout<<containsDuplicate(nums)<<endl;
    return 0;
}