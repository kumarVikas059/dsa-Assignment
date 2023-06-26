#include<iostream>
#include<algorithm>
#include<unordered_set>
#include<vector>
#include<stdio.h>
#define INT_MAX 999;
#define INT_MIN -999;
using namespace std;
int maximumProduct(vector<int>& nums) {
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        int max3 = INT_MIN;
        int min1 = INT_MAX;
        int min2 = INT_MAX;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < min1) {
                min2 = min1;
                min1 = nums[i];
            } else if (nums[i] < min2) {
                min2 = nums[i];
            }
            
            if (nums[i] > max1) {
                max3 = max2;
                max2 = max1;
                max1 = nums[i];
            } else if (nums[i] > max2) {
                max3 = max2;
                max2 = nums[i];
            } else if (nums[i] > max3) {
                max3 = nums[i];
            }
        }
        
        int a = max1 * max2 * max3;//product of two negative of two negative numbers can be positive
        int b = max1 * min1 * min2;
        
        return max(a, b);
    }
    int main(){
    vector<int> nums={-5,-9,2,25};
    cout<<maximumProduct(nums)<<endl;
    return 0;
}