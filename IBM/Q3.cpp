//Check if an Array is Sorted
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool solv(int arr[], int n){
        for(int i=0;i<n-1;i++){
            int store=arr[i];
            if(store>arr[i+1]){
                return false;
            }
        }
        return true;
    }
};
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    Solution sl;
    if(sl.solv(arr,n)){
        cout<<"Sorted Array";
    }else{
        cout<<"Not Sorted";
    }
}