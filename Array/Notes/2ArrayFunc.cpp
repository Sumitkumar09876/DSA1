#include<iostream>
using namespace std;
int i;
void print(int arr[],int size){
    cout<<"Elements in array are -"<<endl;
    for(i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"Printing is done";
}
void charprint(char name[],int size){
    cout<<"Name:";
    for(i=0;i<size;i++){
        cout<<name[i];
    }
}
int main(){
    int arr[10],size;
    cout<<"Enter the size of array";
    cin>>size;
    cout<<"Enter the elements in array";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    print(arr,size);
    int sizeofarray=sizeof(arr)/sizeof(int);
    cout<<"size of array:"<<sizeofarray;
    cout<<endl;
// Character's in array
    char name[10];
    cout<<"enter the characters:";
    for ( i = 0; i < size; i++)
    {
        cin>>name[i];
    }
    charprint(name,size);
    
}