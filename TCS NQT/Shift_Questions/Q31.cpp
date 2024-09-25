/*
14 May 2024 S2 Q2
Given an array of integers nums and  integer k,return the total number of subarrays whose sum equals to k.
A Subarray is a contiguous non-empty sequence of elements within an array;

Ex1:
Input:nums=1 2 3 -3 1 1 1
K=3
Output=6
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    long long solv(vector<int>arr, int k) {
        long long totalCount = 0;
        for(int i = 0; i < arr.size(); i++) {
            long long sum = 0;
            for(int j = i; j < arr.size(); j++) {
                sum += arr[j];
                if(sum == k) {
                    totalCount++;
                }
            }
        }
        return totalCount;
    }
};
int main(){
    vector<int>arr={1,2,3,-3,1,1,1};
    Solution sl;
    cout<<sl.solv(arr,3);
}