/*
3 May S1 Q2
We are given a list of numbers we need to return maximum difference between smallest and the largest number.
Imp: smallest number should be before largest number
Ex n=7
{-3,-5,1,6,-7,8,11}
Output: 18 
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int solv(int arr[],int n){
        int store=arr[0];
        int storeL=arr[0];
        for(int i=0;i<n;i++){
            if(store>arr[i]){
                store=arr[i];
            }
            if(storeL<arr[i]){
                storeL=arr[i];
            }
        }

        return (storeL-store);
    }
};
int main(){
    int arr[]={-3,-5,1,6,8,11,-7};
    Solution sl;
    cout<<sl.solv(arr,7);
}