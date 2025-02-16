/*Reverse the array
Input N=5
    arr[]={5,4,3,2,1};
Output arr[]={1,2,3,4,5}
*/
#include<iostream>
using namespace std;
class Solution{
    public:
    void solv(int arr[],int size){
        int store[size];
        for(int i=0;i<size;i++){
            store[i]=arr[size-1-i];
        }
        for(int i=0;i<size;i++){
            cout<<store[i]<<" ";
        }
    }
};
int main(){
    int arr[]={5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    Solution sl;
    sl.solv(arr,size);
}