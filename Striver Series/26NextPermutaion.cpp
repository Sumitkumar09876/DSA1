//next_permutation : find next lexicographically greater permutation
#include<iostream>
using namespace std;
class Solution{
    public:
    int solv(int arr[],int size){
        int pivot=-1;
        int index;
        for(int i=size-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                pivot=arr[i];
                
                index=i;
                break;
            }
        }
        cout<<pivot<<" "<<index<<endl;
        int store[size];
        if(pivot==-1){
            for(int i=0;i<size;i++){
            store[i]=arr[size-i-1];
        }
        }
        else{
            for(int i=size-2;i>=0;i--){
            if(arr[i]>pivot){
                cout<<arr[i]<<" "<<arr[index]<<endl;
                swap(arr[i],arr[index]);
                break;
            }
        }
        for(int i=0;i<size;i++){
            store[i]=arr[size-i-1];
        }
        }
        for(int i=0;i<size;i++){
            cout<<store[i]<<" ";
        }
    }
};
int main(){
    int arr[]={2, 1, 3};
    int size=sizeof(arr)/sizeof(arr[0]);
    Solution sl;
    sl.solv(arr,size);
}