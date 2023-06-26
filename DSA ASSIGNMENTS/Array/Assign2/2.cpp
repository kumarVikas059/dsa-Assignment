#include<iostream>
#include<algorithm>
#include<unordered_set>
#include<vector>
using namespace std;
int distributeCandies(vector<int>& candyType) {
        unordered_set<int> set;
        int n=candyType.size();
        for(int i=0;i<n;i++){
            set.insert(candyType[i]);
        }
        int ans=static_cast<int>(set.size());
        return ans>n/2?n/2:ans;
    }
int main(){
    vector<int> nums={1,1,2,2,3};
    cout<<distributeCandies(nums)<<endl;
    return 0;
}