/*6 May S1 Q1
Given an array nums of size n, return the majority element.The majority element is the element that appears more than[n/3]times. You may assume that the majority element always exists in the array.
Ex1:
input: nums=[3,2,3,3]
output: 3

Ex2:
input: nums=[2,2,1,0,1,2,2,2,2]
output:2
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void solv(vector<int>&nums){
        map<int,int>store;
        for(int i=0;i<nums.size();i++){
            store[nums[i]]++;
        }
        for(auto& it:store){
            
            if(it.second>nums.size()/3){
                cout<<it.first<<" ";
            }
        }
    }
};
int main(){
    vector<int>arr={3,2,3,3};
    Solution sl;
    sl.solv(arr);
}