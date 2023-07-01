#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
vector<int> findOriginalArray(vector<int>& changed) {
        int n=changed.size();
        if((n&1)!=0)
        return {};
        unordered_map<int,int> map;
        sort(changed.begin(),changed.end());
        
        vector<int> ans;
        for(int i=0;i<n;i++){
            map[changed[i]]++;
        }
        for(int i=0;i<n;i++){
           if(map[changed[i]]){
                    if(!map[2*changed[i]]){
                    return {};
                }
                else{
                    ans.push_back(changed[i]);
                    map[changed[i]]--;
                    map[2*changed[i]]--;
                }
            }
        }
        return ans;
    }
int main(){
       vector<int> changed={1,3,4,2,6,8};
       vector<int> ans=findOriginalArray(changed);
       for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
       }
        
        return 0;
    }