#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;
vector<int> diStringMatch(string s) {
        int high=s.length();
        int low=0;
        vector<int> ans;
        for(int i=0;i<s.length();i++){
            if(s[i]=='I'){
                ans.push_back(low);
                low++;
            }
            else{
                ans.push_back(high);
                high--;
            }
        }
        ans.push_back(low);
        return ans;
    }
int main(){
    string s="IDID";
    vector<int> ans=diStringMatch(s);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}