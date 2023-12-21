#include<iostream>
using namespace std;
int pivot(int arr[],int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-size)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}
int main(){
    int arr[7]={3,4,5,6,0,1,2};
    int size=sizeof(arr)/sizeof(int);
    cout<<"Pivot Index:"<<pivot(arr,size);
}