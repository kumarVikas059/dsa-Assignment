#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> multiply(vector<vector<int>>& A, vector<vector<int>>& B) {
        int M = A.size(), K = A[0].size(), N = B[0].size();
        vector<vector<int>> ans(M, vector<int>(N));
        for (int i = 0; i < M; ++i) {
            for (int j = 0; j < N; ++j) {
                for (int k = 0; k < K; ++k) {
                    ans[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        return ans;
    }
    int main(){
        vector<vector<int>> mat1={{1,0,0},{-1,0,3}};
        vector<vector<int>> mat2={{7,0,0},{0,0,0},{0,0,1}};
        vector<vector<int>> ans=multiply(mat1,mat2);
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans.size();j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
        return 0;
    }