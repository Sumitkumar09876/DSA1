//Better 
#include<iostream>
using namespace std;
class Solution{
    public:
    int solv(int arr[],int size){
        int store=INT_MAX;
            int space=INT_MIN;
        for(int i=0;i<size;i++){
            if(store>arr[i]){
                store=arr[i];
            }
            if(space<arr[i]){
                space =arr[i];
            }
        }
        int sec_store=INT_MAX;
        int sec_space=INT_MIN;
        for(int i=0;i<size;i++){
            if(sec_store>arr[i] && arr[i]>store){
                sec_store=arr[i];
            }
            if(sec_space<arr[i] && arr[i]<space){
                sec_space=arr[i];
            }
        }
        cout<<sec_store<<endl;
        cout<<sec_space;
    }
};
int main(){
    int arr[]={1,2,4,7,7,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    Solution sl;
    sl.solv(arr,size);
}
