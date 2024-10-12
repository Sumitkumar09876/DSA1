#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
    public:
    int solv(vector<int>arr,int k){
        int sum=0,l=0,r=0,maxlength=0;
        int n=arr.size();
        while (r<n)
        {
                sum=sum+arr[r];
            while(sum>k)
            {
                sum=sum-arr[l];
                l++;
            }
            
            if(sum<=k){
                maxlength=max(maxlength,r-l+1);
            }
            r=r+1;
        }
        return maxlength;
    }
};
int main(){
    vector<int>arr={2,5,1,7,10};
    Solution sl;
    cout<<sl.solv(arr,14);
}