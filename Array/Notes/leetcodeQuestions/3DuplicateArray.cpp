//Find Duplicate elements in an array
#include<iostream>
using namespace std;
int i,j;
int duplicate(int arr[],int size){
    int arr1[size];
    for(i=0;i<size;i++){
        arr1[i]=arr[i];
    }
    cout<<"Duplicate Elements in array:";
    for(i=0;i<size;i++){
        for(j=1;j<size;j++){
            if(arr1[i]==arr[j]){
                cout<<arr1[i]<<" ";
                break;  
            }
        }
    }
}
int main(){
    int arr[10]={1,2,3,2,3,4,5,6,4,3};
    int size=sizeof(arr)/sizeof(int);
    cout<<"Elements in an array:";
    for(i=0;i<size;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
    duplicate(arr,size);
}