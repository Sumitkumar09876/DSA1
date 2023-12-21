#include<iostream>
using namespace std;
int i;
void sort(int arr[],int size){
    int store[size];
    int count=0;
    cout<<"Sorted Element:";
    for(i=0;i<size;i++){
        if(arr[i]==0){
            count++;
        }
    }
    for(i=0;i<count;i++){
        arr[i]=0;
    }    
    for(i=count+1;i<size-1;i++){
        arr[i]=1;
    }
    for(i=0;i<size;i++){
        cout<<arr[i];
    }
}
int main(){
    int arr[10]={0,0,1,0,1,1,0,0,1,0};
    int size=sizeof(arr)/sizeof(int);
    cout<<"Size of array:"<<size<<endl;
    cout<<"Elements in array:";
    for(i=0;i<size;i++){
        cout<<arr[i];
    }
    cout<<endl;
    sort(arr,size);
}