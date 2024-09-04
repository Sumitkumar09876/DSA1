/*
Adding Element in an Array
Given an array of N intergers, write a program to add an array element at the beginning, end, and at a specific position.
Input:
N=5  array[]={1,2,3,4,5}
insertbeginning(6)
inserending(7)
insertatpos(8,4)

Output: 6,1,2,8,3,4,5,7
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:

    void insertbeginning(vector<int>&arr,int element){
            arr.insert(arr.begin(),element);
    }
    void insertending(vector<int>&arr,int element){
        arr.push_back(element);
    }
    void insertatpos(vector<int>&arr,int element,int pos){
        if(pos>0 && pos<arr.size()){
            arr.insert(arr.begin()+pos,element);
        }
        else{
            cout<<"Position out of bound";
        }
    }
};
int main(){
    vector<int>arr={1,2,3,4,5};
    Solution sl;
    sl.insertbeginning(arr,6);
    sl.insertending(arr,7);
    sl.insertatpos(arr,8,3);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}