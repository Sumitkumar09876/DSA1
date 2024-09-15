/*
*6 May S1 Q2
Given an array nums with n objects colored red, white or blue sort them in-place so that objects of the same color are adjacent with the colors in the order red , white and blue.
We will use the integers 3, 6 and 7 to represent the color red, white and blue respectively.
You must solve this problem without using the library's sort function.

Ex1:
input: nums=[3,6,3,7,6,3,7]
Ouput: 3 3 3 6 6 7 7
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> solv(vector<int>& nums,int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(nums[j]>nums[j+1]){
                    int store=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=store;
                }
            }
        }
        return nums;
    }
};
int main(){
    vector<int>nums={3,6,3,7,6,3,7};
    Solution sl;
    vector<int>hold;
    hold = sl.solv(nums, nums.size());
    for(int i=0;i<nums.size();i++){
        cout<<hold[i]<<" ";
    }
}