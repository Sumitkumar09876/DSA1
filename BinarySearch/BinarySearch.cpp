//Binary Search is only valid for increasing and decreasing array elements
#include<iostream>
using namespace std;
int i;
int BinarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            cout<<"Found Element "<<arr[mid]<<" at index "<<mid;
            break;
        }
        else if (key>arr[mid])
        {
            start=mid+1;
        }
        else if (key<arr[mid])
        {
            end=mid-1;
        }
        mid=start+(end-start)/2; //if start is 2^31-1 and end is 2^31-1 else use (start+end)/2
    }
    return -1;
}
int main(){
    int arr[10]={2,4,6,8,10,12,16,20,22,24};
    int size=sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter the key to Search:";
    cin>>key;
    cout<<"Elements in array:";
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    BinarySearch(arr,size,key);
}