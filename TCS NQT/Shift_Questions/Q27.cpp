/*
14 May 2024 S1 Q1
Sum of Unique Elements
You are given an integers array nums.The unique elements of an array are the elements that appear exactly once in the array.
Return the sum of all the unique elements of nums.
Example 1:
Input: nums=1 2 3 4
Output:4
Explanation:[1,3],and the sum is 4.

Example 2:
Input:nums=11111
Ouput:0
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int solv(vector<int>arr){
        int sum=0;
        for(int i=0;i<arr.size();i++){
            int store=arr[i];
            for(int j=i;j<arr.size();j++){
                if(store!=arr[j]){
                    int unique=store;
                    sum+=unique;
                }
            }
        }
        return sum;
    }
};
int main(){
    vector<int>arr={1,1,1,1};
    Solution sl;
    cout<<sl.solv(arr);
}
