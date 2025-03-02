/*
Rotate array by K elements
Given an array of n size ,rotate the array by k elements using the Block Swap Algorithm
Input N=5  array[]={1,2,3,4,5} k=2
Output {3,4,5,1,2}

Input n=7  array[]={1,2,3,4,5,6,7} k=3
Output {4,5,6,7,2,3}
*/
#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    void solv(vector<int>&arr ,int size, int k){
        vector<int>temp(size);
        for(int i=0;i<size;i++){
            if(i<size-k){
                temp[i+k]=arr[i];
            }
            else{
                temp[i+k-size]=arr[i];
            }
        }
        for(int i=0;i<size;i++){
            cout<<temp[i]<<" ";
        }
    }
};
int main(){
    vector<int>arr={1,2,3,4,5};
    int size=arr.size();
    Solution sl;
    sl.solv(arr,size,2);
}