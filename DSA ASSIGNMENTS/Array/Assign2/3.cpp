#include<iostream>
#include<algorithm>
#include<unordered_set>
#include<vector>
using namespace std;
bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count=0;
        
        int s=flowerbed.size();
        if(s==1 && flowerbed[0]==0){
           count++; 
           return count;
        }
        
        if(flowerbed[0]==0 && flowerbed[1]==0)
        {   count++;
            flowerbed[0]=1;
        }
        if(flowerbed[s-1]==0 && flowerbed[s-2]==0){
            count++;
            flowerbed[s-1]=1;
        }
        
        for(int i=1;i+1<s;i++){
            int j=i-1;
            int k=i+1;
            if(flowerbed[i]==0){
                if(flowerbed[j]==0 && flowerbed[k]==0)
                {
                        count++;
                        flowerbed[i]=1;
                 }
            }
        
        }
        if(count>=n)
        return true;
        else 
        return false;
    }
int main(){
    int n=2;
    vector<int> nums={1,0,0,0,1,0,0};
    cout<<canPlaceFlowers(nums,n)<<endl;
    return 0;
}