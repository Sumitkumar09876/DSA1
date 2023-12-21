//Sum of Arrays elements
#include<iostream>
using namespace std;
int i;
void sum(int arr[],int size){
    int num1,num2=0;
    for(i=0;i<size;i++){
        num1=arr[i];
        num2=num1+num2;
    }
    cout<<"Sum of elements in a array:"<<num2;
}
int main(){
    int arr[10],size;
    cout<<"enter the size of array:";
    cin>>size;
    cout<<"Enter the elements in array:";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    sum(arr,size);
}