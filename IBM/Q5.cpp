//Left Rotate the Array by One
#include<iostream>
using namespace std;
class Solution{
    public:
    int solv(int arr[],int n){
        int store=arr[0];
        for(int i=0;i<n;i++){
            if(i==n-1){
                arr[i]=store;
            }else{
                arr[i]=arr[i+1];
            }
        }
        for(int i=0;i<n;i++){
            cout<<arr[i];
        }
    }
};
int main(){
    
}