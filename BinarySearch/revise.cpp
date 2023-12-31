#include<iostream>
using namespace std;
int binary(int arr[],int key,int size){
    int start,end,mid;
    start=0;
    end=size-1;
    mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            cout<<mid<<"Found";
            break;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int main(){
    int arr[10];
    int size,key;
    cout<<"Enter the size of array:";
    cin>>size;
    cout<<"Enter the elements in array:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the key:";
    cin>>key;
    binary(arr,key,size);
}