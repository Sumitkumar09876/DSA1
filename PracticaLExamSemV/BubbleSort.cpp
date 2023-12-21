#include<iostream>
using namespace std;
int bubble(int arr[],int size){
    int i,j,store;
    for(i=0;i<size-1;i++){
        for(j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                store=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=store;
            }
        }
    }
    for(i=0;i<size;i++){
        cout<<arr[i];
    }
}
int main(){
    int arr[5]={3,6,1,2,9};
    int size=sizeof(arr)/sizeof(int);
    bubble(arr,size);
}