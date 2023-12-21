#include<iostream>
using namespace std;
int i;
int peek(int arr[],int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        
    mid=start+(end-start)/2;
    }
    return arr[start];
}
int main(){
    int arr[5]={1,3,5,1};
    int size=sizeof(arr)/sizeof(int);
    cout<<"Peak Element:"<<peek(arr,size);
    
}