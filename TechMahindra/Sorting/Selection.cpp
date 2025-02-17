/*
Selection Sort Algorithm
Problem Statement: Given an array of N integers, write a program to implement the Selection sorting algorithm.

Example 1:
Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52
Explanation: After sorting the array is: 9, 13, 20, 24, 46, 52

Example 2:
Input: N=5, array[] = {5,4,3,2,1}
Output: 1,2,3,4,5
Explanation: After sorting the array is: 1, 2, 3, 4, 5
*/
#include<iostream>
using namespace std;
class Solution{
    public:
    int solv(int arr[],int size){
        for(int i=0;i<size-1;i++){
            int min=i;
            for(int j=i+1;j<size;j++){
                if(arr[j]<arr[min]){
                    min=j;
                }
            }
            int temp=arr[min];
                arr[min]=arr[i];
                arr[i]=temp;
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
