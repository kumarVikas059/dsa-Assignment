#include<iostream>
#include<vector>
using namespace std;
int arrangeCoins(int n) {
        int count=0;
        for(int i=1;i<=n;i++){
            n=n-i;
            count++;
        }
        return count;
}
int main(){
    int n=8;
    cout<<arrangeCoins(n)<<endl;
    return 0;
}