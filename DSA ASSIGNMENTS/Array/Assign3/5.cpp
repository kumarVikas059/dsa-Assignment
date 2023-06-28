#include<iostream>
#include<vector>
using namespace std;
vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int sum=digits[n-1]+1;
        digits[n-1]=sum%10;
        int carry=sum/10;
        for(int i=n-2;i>=0;i--){
            sum=digits[i]+carry;
            digits[i]=sum%10;
            carry=sum/10;
        }
        if(carry)
        digits.insert(digits.begin(),carry);
        return digits;
}
int main(){
    int target=7;
    vector<int> nums={1,2,3};
    vector<int> result=plusOne(nums);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<endl;
    }
    return 0;
}