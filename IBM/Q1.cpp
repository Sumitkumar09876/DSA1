//Largest element in an array
#include<iostream>
using namespace std;
class Solution{
    public:
    int solv(int arr[],int n){
        int store=arr[0];
        for(int i=1;i<n;i++){
            if(store<arr[i]){
                store=arr[i];
            }
        }
        return store;
    }
};
int main(){
    int arr[]={23,12,45,23,11,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    Solution sl;
    cout<<sl.solv(arr,size);
}