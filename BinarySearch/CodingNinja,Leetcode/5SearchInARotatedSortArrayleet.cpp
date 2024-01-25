//search in sorted rotated array
#include<iostream>
using namespace std;
int pivot(int arr[],int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return start;
}
int binary(int arr[],int s,int e,int key){
    int start=s;
    int end=e;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(key==arr[mid]){
            return mid;
            break;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int search(int arr[],int size,int key){
    int end=size-1;
    int pivot1=pivot(arr,size);
    if(arr[pivot1]<=key && key<=arr[end]){
        return binary(arr,pivot1,size-1,key);
    }
    else{
        return binary(arr,0,pivot1-1,key);
    }
}
int main(){
    int arr[5]={3,4,0,1,2};
    int size=sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter the key:";
    cin>>key;
    int index=search(arr,size,key);
    if(index!=-1){
        cout<<"key found:"<<index<<endl;
    }
    else{
        cout<<"key not found:";
    }
}