/*
Find the smallest element in an array
Example 1:
Input: arr[]={2,5,1,3,0}
Output: 0;
Exp:0 is the smallest element in the array

Example 2:
Input: arr[]={8,10,5,7,9}
Output:5
Exp: 5 is the smallest element in the array
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int solv(int arr[],int size){
        int store=arr[0];
        for(int i=1;i<size;i++){
            if(store>arr[i]){
                store=arr[i];
            }
        }
        return store;
    }
};
int main(){
    int arr[]={8,10,5,7,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    Solution sl;
    cout<<sl.solv(arr,size);
}