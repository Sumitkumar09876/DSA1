/*
Rearrange the array such that the first half is arranged in increasing order and the second half is arranged in decreasing order
Input 8 7 1 6 5 9
Output 1 5 6 9 8 7
*/
#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    int solv(int arr[],int n){
        vector<int>store;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1-i;j++){
                if(arr[j]>arr[j+1]){
                    int hold=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=hold;
                }
            }
        }
        for(int i=0;i<n/2;i++){
            store.push_back(arr[i]);
        }
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1-i;j++){
                if(arr[j]<arr[j+1]){
                    int hold=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=hold;
                }
            }
        }
        for(int i=0;i<n/2;i++){
            store.push_back(arr[i]);
        }
        for(int i=0;i<n;i++){
            cout<<store[i]<<" ";
        }
    }
};
int main(){
    int arr[]={8,7,1,6,5,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    solution sl;
    sl.solv(arr,size);
}