//Find Second Smallest and Second Largest Element in an array
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    pair<int,int> solv(int arr[],int n){
        if(n<2){
            return make_pair(-1,-1);
        }
        int min=arr[0];
        int max=arr[0];
        for(int i=0;i<n;i++){
            if(min>arr[i]){
                min=arr[i];
            }
            if(max<arr[i]){
                max=arr[i];
            }
        }
        int secmin=INT_MAX;
        int secmax=INT_MIN;
        for(int i=0;i<n;i++){
            if(secmin>arr[i] && arr[i]>min){
                secmin=arr[i];
            }
            if(secmax<arr[i] && arr[i]<max){
                secmax=arr[i];
            }
        }
        return make_pair(secmax,secmin);
    }
};
int main(){
    int arr[]={3,4,5,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    Solution sl;
    pair<int,int> ans = sl.solv(arr,size);
    cout<<ans.first<<" "<<ans.second;}