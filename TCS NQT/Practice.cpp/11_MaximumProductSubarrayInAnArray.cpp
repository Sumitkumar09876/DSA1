/*
Maximum Product Subarray in an array
Given an array that contains both -ve and +ve integers, find the maximum product subarray.
Ex
Input Nums={1,2,3,4,5,0}
Output 120
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int solv(int arr[],int size){
        int sum=1;
        int count=0;
        for(int i=0;i<size;i++){
            if(arr[i]>0){
                sum = sum*arr[i];
            }
            if(arr[i]<0){
                count++;
                cout<<count<<" ";
                if(count%2==1){
                    int sum=1;
                }
                
            }
            if(count%2==0){
                sum=sum*arr[i];
                
            }
        }
        return sum;
    }
};
int main(){
    int arr[]={1,2,3,-4,-5,0};
    int size=sizeof(arr)/sizeof(int);
    Solution sl;
    cout<<sl.solv(arr,size);
}