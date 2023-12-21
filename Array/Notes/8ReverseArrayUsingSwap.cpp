//Reverse an array using swap method
#include<iostream>
using namespace std;
int i,j;
void reverse(int arr[],int size){
    int store;
    for(i=0,j=size-1;j>=0;i++,j--){
        if(i<j){
        int store=arr[i];
        arr[i]=arr[j];
        arr[j]=store;
        }
    }
    cout<<endl;
    cout<<"Reversed elements:";
    for(i=0;i<size;i++){
        cout<<" "<<arr[i];
    }

}
int main(){
    int arr[6]={1,2,7,3,5,10};
    int size=sizeof(arr)/sizeof(int);
    cout<<"Enter the elements:";
    for(i=0;i<size;i++){
        cout<<" "<<arr[i];
    }
    reverse(arr,size);
}