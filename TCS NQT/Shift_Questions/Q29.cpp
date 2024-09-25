/*
Problem Statement: Find the Single Number
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.

Example 1:
Input: nums = [2, 2, 1]
Output: 1
Example 2:
Input: nums = [4, 1, 2, 1, 2]
Output: 4
*/
#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int solv(vector<int>arr){
        int result=0;
        for(int i=0;i<arr.size();i++){
            result ^=arr[i];
        }
        return result;
    }
};
int main(){
    vector<int>arr={4, 1, 2, 1, 2};
    Solution sl;
    cout<<sl.solv(arr);
}