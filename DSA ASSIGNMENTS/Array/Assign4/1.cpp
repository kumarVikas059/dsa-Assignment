#include<iostream>
#include<vector>
using namespace std;
vector<int> arrayIntersection(vector<int>& arr1,vector<int>& arr2,vector<int>& arr3){
    int i=0;
    int j=0;
    int k=0;
    vector<int> ans;
    while(i<arr1.size() && j<arr2.size() && k<arr3.size()){
        if(arr1[i]==arr2[j] && arr2[j]==arr3[k]){
            ans.push_back(arr1[i]);
            i++;
            j++;
            k++;
        }
        else if(arr1[i]<arr2[j])i++;
        else if(arr2[j]<arr3[k])j++;
        else k++;
    }
    return ans;
}
int main(){
    vector<int> arr1 ={1,8,9,13,20};
    vector<int> arr2 ={2,3,4,8,9,10,75};
    vector<int> arr3 ={1,2,3,4,5,6,7,8,9};
    vector<int> ans=arrayIntersection(arr1,arr2,arr3);
    for(auto s:ans)
    cout<<s<<endl;
    return 0;
}