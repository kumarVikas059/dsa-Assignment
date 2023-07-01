#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int s=0;
        int e=m*n-1;
        int mid,row,col,element;
        while(s<=e){
             mid=s+(e-s)/2;
             row=mid/n;
             col=mid%n;
             element=matrix[row][col];
            if(element==target)
            return true;
            else if(target>element)
            s=mid+1;
            else
            e=mid-1;
        }
        return false;
}
int main(){
    int target=3;
    vector<vector<int>> mat1={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    cout<<searchMatrix(mat1,target)<<endl;
    return 0;
}