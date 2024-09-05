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
        if(size==0){
            return 0;
        }
        int maxProduct=1;
        int negcount=0;
        int maxnegcount=INT_MIN;
        bool hashZero=false;
        for(int i=0;i<size;i++){
            if(arr[i]==0){
                hashZero=true;
                continue;
            }
            if(arr[i]<0){
                negcount++;
                maxnegcount=max(maxnegcount,arr[i]);
            }
            maxProduct *= arr[i];
        }
        
        if(negcount%2 != 0){
            maxProduct /= maxnegcount;
        }
        if(maxProduct<0 && hashZero){
            return 0;
        }
        return maxProduct;
    }
};
int main(){
    int arr[]={1,2,3,-4,-5,0};
    int size=sizeof(arr)/sizeof(int);
    Solution sl;
    cout<<sl.solv(arr,size);
}