/*
3 Sum : Find triplets that add up to a zero

Problem Statement: Given an array of N integers, your task is to find unique triplets that add up to give a sum of zero. In short, you need to return an array of all the unique triplets [arr[a], arr[b], arr[c]] such that i!=j, j!=k, k!=i, and their sum is equal to zero.

Example 1:
Input:
 nums = [-1,0,1,2,-1,-4]

Output:
 [[-1,-1,2],[-1,0,1]]

Explanation:
 Out of all possible unique triplets possible, [-1,-1,2] and [-1,0,1] satisfy the condition of summing up to zero with i!=j!=k
*/
#include<iostream>
using namespace std;
class Solution{
    public:
    int solv(int arr[],int size){
        int i=0;
        int j=0;
        int sum=INT_MAX;
        for(int i=0;i<size;i++){
            sum=sum+arr[i];
            if(sum>0 & j<i){
                sum-=arr[j];
                j++;
            }if(sum==0){
                for(int k=j;k<=i;k++){
                    cout<<arr[k]<<" ";
                }
            }
        }
        return 0;
    }
};
int main(){
    int arr[]={-1,0,1,2,-1,-4};
    int size=sizeof(arr)/sizeof(arr[0]);
    Solution sl;
    sl.solv(arr,size);
}