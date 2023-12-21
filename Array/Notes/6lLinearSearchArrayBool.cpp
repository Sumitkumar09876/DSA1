//Linear Search of array using bool function
#include<iostream>
using namespace std;
int i;
bool LinearSearch(int arr[],int size){
    int num1;
    cout<<"Enter the element to search";
    cin>>num1;
    for(i=0;i<size;i++){
        if(num1==arr[i]){
            return 1;
        }
        else{
            return 0;
        }
    }
}
int main(){
    int arr[10],size;
    cout<<"enter the size of array:";
    cin>>size;
    cout<<"enter the element:";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    bool found=LinearSearch(arr,size);
    if(found){
        cout<<"Element found";
    }
    else{
        cout<<"not found";
    }
}