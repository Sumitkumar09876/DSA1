#include<iostream>
using namespace std;
int pivot(int arr[],int size){
    int i,sum1,sum2=0;
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]<arr[mid+1] && arr[mid]<arr[mid-1]){
            cout<<arr[mid];
            break;
        }
        else if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            start=mid+1;
        }
        else if(arr[mid-1]<arr[mid] && arr[mid]<arr[mid+1]){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
}
int main(){
    int arr[7]={7,9,10,3,4,5,6};
    int size=sizeof(arr)/sizeof(int);
    pivot(arr,size);
}