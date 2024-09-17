/*
6 May S2 Q1
Given an array of size N-1 with integers in the range of [1,N],the task is to find the missing number from the first N integers.
Ex1:
Input:
4
1 2 3 5
Ouput:4

EX2:
Input:
3
1 2 4
Ouput:3
*/
#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;
class Solution{
    public:
    int solv(vector<int>&nums,int size){
        int hold;
        int count=0;
        for(int i=0;i<size;i++){
            count++;
            cout<<nums[i]<<" "<<count<<endl;
            
            if(nums[i]!=count){
                hold=count;
                break;
            }
            
        }
        return hold;
    }
};
int main(){
    string str="[1,2,4]";
    vector<int>nums;
    string trimedstr=str.substr(1,str.size()-2);
    stringstream ss(trimedstr);
    string item;
    while(getline(ss,item,',')){
        nums.push_back(stoi(item));
    }
    Solution sl;
    cout<<sl.solv(nums,3);
}