#include<iostream>
using namespace std;
class Solution{
    public:
    int solv(int arr[],int size){
        int store=0;
        for(int i=0;i<size;i++){
        store=store^arr[i];
        }        
        return store;
    }
};
int main(){
    int arr[]={4,1,2,1,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    Solution sl;
    cout<<sl.solv(arr,size)<<" ";
}