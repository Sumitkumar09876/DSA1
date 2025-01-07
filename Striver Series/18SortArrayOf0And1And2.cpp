#include<iostream>
using namespace std;
class Solution{
    public:
    void solv(int arr[],int size){
        for(int i=0;i<size;i++){
            for(int j=0;j<size-i;j++){
                if(arr[j]>arr[j+1]){
                int store=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=store;
            }
            }
        }
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    int arr[]={2,0,2,1,1,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    Solution sl;
    sl.solv(arr,size);
}