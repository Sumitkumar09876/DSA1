/*
Rearrange the array such that the first half is arranged in increasing order and the second half is arranged in decreasing order
Input 8 7 1 6 5 9
Output 1 5 6 9 8 7
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void solv(int arr[],int size){
        int mid=size/2;
        cout<<mid<<endl;
        for(int i=0;i<size;i++){
            for(int j=0;j<size-i-1;j++){
                    if(arr[j]>arr[j+1]){
                        int store=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=store;
                    }
            }
        }
        int left=mid;
        int right=size-1;
        while (left<right)
        {
            int hold=arr[left];
            arr[left]=arr[right];
            arr[right]=hold;
            left++;
            right--;
        }
        
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }

    }
};
int main(){
    int arr[]={8 ,7 ,1 ,6 ,5 ,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    Solution sl;
    sl.solv(arr,size);
}