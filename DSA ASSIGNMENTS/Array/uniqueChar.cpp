#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;
int UniqueChar(string s){
    
    for(int i=0;i<s.length();i++)
    {   
        int firstIndex=static_cast<int>(s.find(s[i]));
        int lastIndex=static_cast<int>(s.find_last_of(s[i]));
        // cout<<firstIndex<<endl;
        // cout<<lastIndex<<endl;
        if(firstIndex==lastIndex)
        return i;
    }
    return -1;

}
int main(){
    // string s="leetcode";
    string s="loveleetcode";
    // string s="aabb";
    cout<<UniqueChar(s);
    return 0;
}