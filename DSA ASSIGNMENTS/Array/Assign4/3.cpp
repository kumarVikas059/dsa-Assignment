#include<iostream>
#include<vector>
using namespace std;
 vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>>tp(n,vector<int>(m,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                tp[j][i]=matrix[i][j];
            }
        }
        return tp;
}
int main(){
    int target=7;
    vector<vector<int>> matrix={{1,2,3,4},
    {5,6,7,8}};
    vector<vector<int>> ans=transpose(matrix);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}