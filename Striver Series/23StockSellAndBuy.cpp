#include<iostream>
using namespace std;
class Solution{
    public:
    int solv(int arr[],int size ){
        int minval=arr[0];
        int maxdiff=0;
        for(int i=0;i<size;i++){
            if(arr[i]>minval){
                maxdiff=max(maxdiff,arr[i]-minval);
            }if(arr[i]<minval){
                minval=arr[i];
            }
        }
        return maxdiff;
    }
};
int main(){
    int arr[]={17,20,11,9,12,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    Solution sl;
    cout<<sl.solv(arr,size);
}