//Search in a rotated and sorted array
#include<iostream>
using namespace std;
int pivot(int arr[],int size){
    int start=0;
    int pivot;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    cout<<"Pivot Index:"<<start;
    return start;
}
int search(int arr[],int size,int key,int pivot1){
    cout<<"Pivot1 Index:"<<pivot1;
    int start=0;
    int end=size-1;
    while(start<end){
    int mid=start+(end-start)/2;
    if(key>arr[pivot1] && key<arr[end]){
        if(key==mid){
            cout<<"key Index:"<<mid;
            break;
        }
    }
    if(key>arr[0] && key<arr[pivot1]){
        if(key==mid){
            cout<<"key Index:"<<mid;
        }
    }
    }
}
int main(){
    int arr[5]={3,4,5,1,2};
    int size=sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter the key:";
    cin>>key;
    int pivot1=pivot(arr,size);
    cout<<endl;
    search(arr,size,key,pivot1);
}