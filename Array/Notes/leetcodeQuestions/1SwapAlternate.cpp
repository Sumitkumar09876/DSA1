//Swap Alternate elements in an array
#include<iostream>
using namespace std;
int i,j;
int swapalter(int arr[],int size){
    int store;
    for(i=0,j=1;j<size;i++,j++){
        if(i<size || j<size){
        store=arr[i];
        arr[i]=arr[j];
        arr[j]=store;
        }
        i=i+1;
        j=j+1;
    }
    cout<<"Swaped Elements:";
    for(i=0;i<size;i++){
        cout<<arr[i];
    }
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(int);
    cout<<"Elements in array:";
    for(i=0;i<size;i++){
        cout<<arr[i];
    }
    cout<<endl;
    swapalter(arr,size);
}