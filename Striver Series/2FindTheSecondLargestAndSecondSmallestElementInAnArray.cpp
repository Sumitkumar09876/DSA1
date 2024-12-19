//Problem Statement: Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.
#include<iostream>
using namespace std;
class Solution{
    public:
    pair<int,int> solv(int arr[],int size){
        for(int j=0;j<size-1;j++){
            for(int i=0;i<size-1-j;i++){
            if(arr[i]>arr[i+1]){
                int store=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=store;
            }
        }
        }
        return {arr[1],arr[size-1]};
    }
};
int main(){
    int arr[]={3,4,5,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    Solution sl;
    pair<int,int>result=sl.solv(arr,size);
    cout<<result.first<<endl;
    cout<<result.second;
}