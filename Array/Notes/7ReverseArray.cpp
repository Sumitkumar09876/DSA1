//Reverse an Array
#include<iostream>
using namespace std;
int j,i;
void reverse(int arr[],int size){
    int rev[size];
    for(i=size-1,j=0;i>=0;i--,j++){
        rev[j]=arr[i];
    }
    cout<<"check:";
    for(i=0;i<size;i++){
        cout<<rev[i];
    }
    cout<<endl;
    for(i=0;i<size;i++){
        arr[i]=rev[i];
    }
}
void print(int arr[],int size){
    cout<<"element reversed:";
    for(i=0;i<size;i++){
        cout<<arr[i];
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    cout<<"size of array:"<<size<<endl;
    cout<<"elements in array:";
    for(i=0;i<size;i++){
        cout<<arr[i];
    }
    cout<<endl;
    reverse(arr,size);
    print(arr,size);
}