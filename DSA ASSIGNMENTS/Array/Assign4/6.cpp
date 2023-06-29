#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> sortedSquares(vector<int>& nums) {
    int s = 0;
    int e = nums.size() - 1;
    vector<int> ans;
    while (s <= e) {
        int sP = nums[s] * nums[s];
        int eP = nums[e] * nums[e];
        if (sP <= eP) {
            ans.push_back(eP);
            e--;
        }
        else {
            ans.push_back(sP);
            s++;
        }
    }
    reverse(ans.begin(), ans.end());  // Reverse the ans vector to get sorted squares
    return ans;
}
int main() {
    vector<int> nums = {-4, -1, 0, 3, 10};
    vector<int> ans = sortedSquares(nums);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
