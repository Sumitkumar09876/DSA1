/*
3 May 2024 S2 Q1
In a company there are employees and their efficiency is given in array 'arr' (can be -ve) you need to find the max efficiency of 3 employees. The efficiency of 3 employee will be calculated by multiplying their individual efficiencies from the given array.

Example 1:
5
3 -2 -8 4 1
o/p:64
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int solv(vector<int>&arr){
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int case1=arr[n-1]*arr[n-2]*arr[n-3];
        int case2=arr[0]*arr[1]*arr[n-1];
        return max(case1,case2);
    }
};
int main(){
    vector<int>arr={3, -2, -8, 4, 1};
    Solution sl;
    cout<<sl.solv(arr);
}
