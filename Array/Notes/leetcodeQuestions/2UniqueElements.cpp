//Find Unique elements in an array
#include<iostream>
using namespace std;
int i,num;
int unique(int arr[],int size){
    cout<<"Unique Elements in array:";
    for(i=0;i<size;i++){
        num=arr[i];
        for(i=0;i<size;i++){
            if(num==arr[i]){
                break;     
            }
        }
        if(num!=arr[i]){
            cout<<num;
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
    unique(arr,size);
}