#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
    public:
    int solv(vector<int>&arr,int k){
        int rsum=0,lsum=0,maxlength=0,l=arr.size()-1;
        for(int i=0;i<k;i++){
            rsum+=arr[i];
        }
        maxlength=rsum;
        for(int i=k;i>=0;i--){
            rsum-=arr[i];
            lsum+=arr[l];
            l--;
            maxlength=max(maxlength,lsum+rsum);
        }
        return maxlength;
        }  
};
int main(){
    vector<int>arr={2,3,4,5,6,7};
    Solution sl;
    cout<<sl.solv(arr,3);
}