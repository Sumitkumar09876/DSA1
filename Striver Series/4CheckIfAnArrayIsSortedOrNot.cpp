#include<iostream>
using namespace std;
class Solution{
    public:
    bool solv(int arr[],int size){
        int comp=arr[0];
        for(int i=1;i<size;i++){
            if(comp<=arr[i]){
                comp=arr[i];
            }else if(comp>arr[i]){
                return false;
            }
        }
        return true;
    }
};
int main(){
    int arr[]={5,4,6,7,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    Solution sl;
    if(sl.solv(arr,size)){
        cout<<"Sorted Array";
    }
    else{
        cout<<"Not Sorted Array";
    }
}