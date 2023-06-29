#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        
        vector<int> distinct_nums1, distinct_nums2;
        for (int num : set1) {
            if (set2.count(num) == 0) {
                distinct_nums1.push_back(num);
            }
        }

        for (int num : set2) {
            if (set1.count(num) == 0) {
                distinct_nums2.push_back(num);
            }
        }

        return {distinct_nums1, distinct_nums2};
    }
int main(){
    vector<int> n1={1,3,3,2,4,14};
    vector<int> n2={1,3,11,8,5};
    vector<vector<int>> ans=findDifference(n1,n2);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++)
        cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}