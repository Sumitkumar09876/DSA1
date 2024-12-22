#include<iostream>
using namespace std;
class Solution{
    public:
    int solv(int arr[],int size,int k){
        for(int i=0;i<size;i++){
            if(arr[i]==k){
                return i;
            }
        }
        return -1;
    }
};
int main(){
    int arr[]={5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the element to search:";
    int k;
    cin>>k;
    Solution sl;
    cout<<sl.solv(arr,size,k);
}