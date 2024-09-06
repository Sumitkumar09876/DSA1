/*
Rotate array by K elements
Given an array of n size ,rotate the array by k elements using the Block Swap Algorithm
Input N=5  array[]={1,2,3,4,5} k=2
Output {3,4,5,1,2}

Input n=7  array[]={1,2,3,4,5,6,7} k=3
Output {4,5,6,7,2,3}
*/
#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    void solv(int arr[],int n, int k){
        vector<int>store;
        for(int i=k;i<n;i++){
            store.push_back(arr[i]);
        }
        for(int i=0;i<k;i++){
            store.push_back(arr[i]);
        }
        for(int i=0;i<store.size();i++){
            cout<<store[i]<<" ";
        }
    }
};
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    solution sl;
    sl.solv(arr,size,2);
}