#include<iostream>
using namespace std;
int binary(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(key==arr[mid]){
            cout<<mid<<" Key found";
            break;
        }
        else if (key<arr[mid])
        {
            end=mid-1;
        }
        else if (key>arr[mid])
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main(){
    int arr[5]={1,11,34,51,56},key;
    int size=sizeof(arr)/sizeof(int);
    cout<<"Enter the key:";
    cin>>key;
    binary(arr,size,key);
}