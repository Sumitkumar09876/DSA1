/*
Problem Statement: Given an array of integers and an integer k, return the total number of subarrays whose sum equals k.
A subarray is a contiguous non-empty sequence of elements within an array.
Pre-requisite: Longest subarray with given sum

Example 1:
Input Format:
 N = 4, array[] = {3, 1, 2, 4}, k = 6
Result:
 2
Explanation:
 The subarrays that sum up to 6 are [3, 1, 2] and [2, 4].
*/
#include<iostream>
using namespace std;
class Solution{
    public:
    int solv(int arr[],int size,int n){
        int sum=0;
        int j=0,cnt=0;
        for(int i=0;i<size;i++){
            sum=sum+arr[i];
            while(sum>n && j<=i){
                sum-=arr[j];
                j++;
            }
            if(sum==n){
                cnt++;
                for(int k=j;k<=i;k++){
                    cout<<arr[k]<<" ";
                }
                cout<<endl;
            }
        }
        return cnt;
    }
};
int main(){
    int arr[]={3,1,2,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    Solution sl;
    cout<<sl.solv(arr,size,6);
}