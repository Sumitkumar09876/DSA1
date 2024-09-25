/*
14 May 2024 S1 Q2 (kadane's Algorithm)
Given an integer array nums,find the subarray with the largest sum, and returns its sum.
Example=-2 1 -3 4 -1 2 1 -5 4
Output:6
Explanation:The subarray[4,-1,2,1] has the largest sum 6
Example 2:
Input:nums=5 4 -1 7 8
Output:23
Explanation: The subarray[5,4,-1,7,8] has the largest sum 23.
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    long long solv(vector<int>arr){
        long long sum=0,maxi=INT_MIN;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum>maxi){
                maxi=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};
int main(){
    vector<int>arr={5,4,-1,7,8};
    Solution sl;
    cout<<sl.solv(arr);
}