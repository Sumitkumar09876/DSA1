/*
Equilibrium index of an array
Given an array arr[] of size n, return an equilibrium index (if any) or -1 if no equilibrium index exists. The equilibrium index of an array is an index such that the sum of elements at lower indexes equals the sum of elements at higher indexes.

Note: Return equilibrium point in 1-based indexing. Return -1 if no such point exists. 

Examples:

Input: arr[] = {-7, 1, 5, 2, -4, 3, 0}
Output: 4
Explanation: In 1-based indexing, 4 is an equilibrium index, because: arr[1] + arr[2] + arr[3] = arr[5] + arr[6] + arr[7]

Input: arr[] = {1, 2, 3}
Output: -1
Explanation: There is no equilibrium index in the array.
*/
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
class Solution{
    public:
    int solv(vector<int>arr){
        int totalsum=0;
        for(int i=0;i<arr.size();i++){
            totalsum+=arr[i];
        }
        int leftsum=0;
        for(int i=0;i<arr.size();i++){
            totalsum-=arr[i];
            if(totalsum==leftsum){
                return i+1;
            }
            leftsum+=arr[i];
        }
        return -1;
    }
};
int main(){
    string str="[-7, 1, 5, 2, -4, 3, 0]";
    vector<int>nums;
    string trimedin=str.substr(1,str.size()-2);
    stringstream ss(trimedin);
    string item;
    while(getline(ss,item,',')){
        nums.push_back(stoi(item));
    }
    for(int i=0;i<nums.size();i++){
        cout<<nums[i];
    }
    cout<<endl;
    Solution sl;
    cout<<sl.solv(nums);
}