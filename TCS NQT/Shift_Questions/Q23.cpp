/*
9 May 2024 S1 Q1
Given and integer N, return true it is an Armstrong Number otherwise return false.
Input:[153,371,108]
Ouput:153 371 
*/
#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<sstream>

using namespace std;
class Solution{
    public:
    vector<int>solv(vector<int>arr){
        int n=0;
        vector<int>store;
        for(int i=0;i<arr.size();i++){
            int sum = 0;
            int n=arr[i];
            while(n!=0){
                int digit=n%10;
                sum += pow(digit,3);
                n=n/10;
            }
            if(sum==arr[i]){
                store.push_back(sum);
            }
        }
        return store;
    }
};
int main(){
    string str="[153,371,108]";
    vector<int>nums;
    string trimedin=str.substr(1,str.size()-2);
    stringstream ss(trimedin);
    string item;
    while(getline(ss,item,',')){
        nums.push_back(stoi(item));
    }
    Solution sl;
    vector<int>result=sl.solv(nums);
    for(auto& it:result){
        cout<<it<<" ";
    }
}