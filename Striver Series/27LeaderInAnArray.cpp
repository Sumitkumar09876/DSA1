/*
Problem Statement: Given an array, print all the elements which are leaders. A Leader is an element that is greater than all of the elements on its right side in the array.
Input:

 arr = [10, 22, 12, 3, 0, 6]
Output:

 22 12 6
Explanation:

 6 is a leader. In addition to that, 12 is greater than all the elements in its right side (3, 0, 6), also 22 is greater than 12, 3, 0, 6.
*/
#include<iostream>
using namespace std;
class Solution{
    public:
    int solv(int arr[],int size){
        int store[10],j=0;
        int max=arr[size-1];
        for(int i=size-1;i>=0;i--){
            if(i==size-1){
                store[j]=arr[i];
                j++;
            }
            else{
                if(arr[i]>=max){
                    store[j]=arr[i];

                    max=arr[i];
                    j++;
                }
                
            }
        }
        int size1=j;
        for(int i=0;i<size1;i++){
                cout<<store[i]<<" ";  
        }
    }
};
int main(){
    int arr[]={10, 22, 12, 3, 0, 6};
    int size=sizeof(arr)/sizeof(arr[0]);
    Solution sl;
    sl.solv(arr,size);
}