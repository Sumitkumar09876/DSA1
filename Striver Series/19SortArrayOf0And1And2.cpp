//Optimal Solution
//Dutch National Flag Algorithm(2 pointer);
#include<iostream>
using namespace std;
class Solution{
    public:
    void solv(int arr[],int size){
        int low=0,mid=0,high=size-1;
        while(mid<=high){
            if(arr[mid]==0){
                swap(arr[low],arr[mid]);
                low++;
                mid++;
            }else if(arr[mid]==1){
                mid++;
            }else if(arr[mid]==2){
                swap(arr[mid],arr[high]);
                high--;
            }
        }
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    int arr[]={0, 2, 1, 2, 0, 1};
    int size=sizeof(arr)/sizeof(arr[0]);
    Solution sl;
    sl.solv(arr,size);
}