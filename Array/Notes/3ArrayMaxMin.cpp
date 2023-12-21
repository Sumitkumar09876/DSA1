#include<iostream>
using namespace std;
int i;
int Max(int arr[],int size){
    int num1=arr[0];
    for(i=1;i<size;i++){
        if(num1<arr[i]){
            num1=arr[i];
            
        }
    }
        cout<<"Max element:"<<num1;
        return 0;
}
//built in function--
int maxi(int arr[],int size){
    int max1=arr[0];
    for(i=0;i<size;i++){
        max1=max(max1,arr[i]);
    }
    cout<<"Maxi number:"<<max1;
}
int Min(int arr[],int size){
    int num3=arr[0];
    for(i=1;i<size;i++){
        if(num3>arr[i]){
            num3=arr[i];
        } 
    }
    cout<<"Min element:"<<num3<<endl;
    return 0;
}
int main(){
    int size;
    cout<<"Enter the size of array:";
    cin>>size;
    int arr[size];
    cout<<"enter the elements"<<endl;
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    Max(arr,size);
    cout<<endl;
    Min(arr,size);
    cout<<endl;
    maxi(arr,size);
}
