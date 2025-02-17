/*
Bubble Sort Algorithm
Problem Statement: Given an array of N integers, write a program to implement the Bubble Sorting algorithm.

Example 1:
Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52
Explanation: After sorting we get 9,13,20,24,46,52

Input: N = 5, array[] = {5,4,3,2,1}
Output: 1,2,3,4,5
Explanation: After sorting we get 1,2,3,4,5
*/
#include<iostream>
using namespace std;
class Solution{
    public:
    int solv(int arr[],int size){
        for(int i=0;i<size;i++){
            int swap=0;
            for(int j=0;j<size-i-1;j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    swap=1;
                }
            }
            if(swap==0){
                break;
            }
        }
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    int arr[]={13,46,24,52,20,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    Solution sl;
    sl.solv(arr,size);
}