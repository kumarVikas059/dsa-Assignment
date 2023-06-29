#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxCount(int m, int n, vector<vector<int>>& ops) {
    int minRow=m;
    int minCol=n;
    for(auto a: ops){
        minRow=min(minRow,a[0]);
        minCol=min(minCol,a[1]);
    }
    return minRow*minCol;    
}
int main(){
    vector<vector<int>> ops={{2,2},{3,3}};
    int m=3;
    int n=3;
    cout<<maxCount(m,n,ops)<<endl;
    return 0;
}