/*
Implement the Heap Sort algorithm to sort an array of integers in ascending order.
Using Max heap.
Input:
[5, 2, 8, 1, 9, 4, 7, 3, 6]

Output:
[1, 2, 3, 4, 5, 6, 7, 8, 9]
*/
#include<iostream>
using namespace std;
class Solution{
    public:
    void heapify(int arr[],int size, int i){
        int largest=i;
        int left=2*i+1;
        int right=2*i+2;
        if(left<size && arr[largest]<arr[left]){
            largest=left;
        }
        if(right<size && arr[largest]<arr[right]){
            largest=right;
        }
        if(largest!=i){
            swap(arr[largest],arr[i]);
            heapify(arr,size,largest);
        }
    }
    void heapSort(int arr[],int size){
        while(size>0){
            swap(arr[size],arr[0]);
            size--;
            heapify(arr,size,0);
        }
    }
};
int main(){
    int arr[]={5, 2, 8, 1, 9, 4, 7, 3, 6};
    int size=sizeof(arr)/sizeof(arr[0]);
    Solution sl;
    for(int i=size/2;i>0;i--){
        sl.heapify(arr,size,i);
    }
    sl.heapSort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

