#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int solv(vector<int>arr,int k){
        int sum=0,maxSum=INT_MIN;
        int n=arr.size();
            for (int i = 0; i <k; i++)
            {
                sum=sum+arr[i];
            }
            maxSum=sum;
            for(int i=k;i<n;i++){
                sum=sum-arr[i-k]+arr[i];
                maxSum=max(maxSum,sum);
            }
        return maxSum;
    }
};
int main(){
    vector<int>arr={1, 4, 2, 10, 23, 3, 1, 0, 20};
    Solution sl;
    cout<<sl.solv(arr,4);
}