#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
bool validMountainArray(vector<int>& arr) {
        int i=0;
        while(i+1<arr.size() && arr[i]<arr[i+1])
        i++;
        if(i==0||i==arr.size()-1)
        return false;
        while(i+1<arr.size() && arr[i]>arr[i+1])
        i++;
        return i==arr.size()-1;
    }
int main(){
    vector<int> nums={5,6,7,8,10,8,7,1};
    cout<<validMountainArray(nums)<<endl;
    return 0;
}