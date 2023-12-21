//Linear Search in an Array
#include<iostream>
using namespace std;
int i;
void linearSearch(int arr[],int size){
    int num1;
    cout<<"enter the elements to search:";
    cin>>num1;
    for(i=0;i<size;i++){
        if(num1==arr[i]){
            cout<<"Element found:"<<arr[i]<<" at index:"<<i<<endl;
        }
        else{
            cout<<"Not found:";
        }
    }
}
int main(){
    int arr[10],size;
    cout<<"enter the size of array:";
    cin>>size;
    cout<<"enter the elements:";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    linearSearch(arr,size);
}