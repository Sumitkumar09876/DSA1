/*
Search an element in an array and return its positon
Ex 1:
Input arr[]={1,2,3,4,5} k=3
Output 2
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int solv(int arr[],int size,int k){
        int start=0;
        int end=size-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]<k){
                start=mid+1;
            }
            else if (arr[mid]>k)    
            {
                end=mid-1;
            }else{
                return mid; 
            }
        }
        return -1;
    }
};
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    Solution sl;
    cout<<sl.solv(arr,size,3);
}