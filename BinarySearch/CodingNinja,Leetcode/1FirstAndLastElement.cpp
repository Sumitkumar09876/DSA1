//First and last element in an array
#include<iostream>
using namespace std;
int i;
int first(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int store;
    while(start<=end){
        if(key==arr[mid]){
            store=mid;
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        mid=(start+end)/2;
        }
        return store;
}
int last(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int store;
    while(start<=end){
        if(key==arr[mid]){
            store=mid;
            start=mid+1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        mid=(start+end)/2;
        }
        return store;
}
int main(){
    int arr[5]={1,3,3,3,5};
    int size=sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter the key:";
    cin>>key;
    cout<<"First Occurence of "<<key<<" is "<<first(arr,size,key)<<endl;
    cout<<"last Occurence of "<<key<<" is "<<last(arr,size,key)<<endl;
    int firstindex=first(arr,size,key);
    int lastindex=last(arr,size,key);
    int Totaloccurrence=(lastindex-firstindex)+1;
    cout<<"Total number of Ocurrence:"<<Totaloccurrence;

}