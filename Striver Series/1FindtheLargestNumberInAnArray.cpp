//Problem Statement: Given an array, we have to find the largest element in the array.
#include<iostream>
using namespace std;
class Solution{
    public:
    int solv(int arr[],int size){
        int comp=arr[0];
        for(int i=1;i<size;i++){
            if(comp<arr[i]){
                comp=arr[i];
            }
        }
        return comp;
    }
};
int main(){
    int arr[]={3,6,1,9,7,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    Solution sl;
    cout<<sl.solv(arr,size);
}