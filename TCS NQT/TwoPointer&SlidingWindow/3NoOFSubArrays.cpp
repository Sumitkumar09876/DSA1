#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int solv(vector<int>&arr,int k){
        int l=0,r=0,sum=0,cnt1=0,cnt2=0;
        int n=arr.size();
        while (r<n)
        {
            sum=sum+arr[r];
            while (sum>=k)
            {
                sum=sum-arr[l];
                l++;
            }
            cnt1+=r-l+1;
            while (sum>=(k-1))
            {
                sum=sum-arr[l];
                l++;
            }
            cnt2+=r-l+1;
            r++;
        }
        return cnt1-cnt2;
        
    }
};
int main(){
    vector<int>arr={2, 4, 3, 7, 5};
    Solution sl;
    cout<<sl.solv(arr,10);
    
}