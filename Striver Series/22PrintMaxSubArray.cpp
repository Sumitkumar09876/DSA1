#include<iostream>
using namespace std;
class Solution{
    public:
    long long solv(int arr[],int size){
        long long maxi=LONG_LONG_MIN;
        long long sum=0;
        int start=0;
        int begin=-1,end=-1;
        for(int i=0;i<size;i++){
            if(sum==0){
                start=i;
            }
            sum+=arr[i];
            
            if(sum>maxi){
                maxi=sum;
                begin=start;
                end=i;
            }
            if(sum<=0){
                sum=0;
            }
        }
        for(int i=begin;i<=end;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return maxi;
    }
};
int main(){
    int arr[]={-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size=sizeof(arr)/sizeof(arr[0]);
    Solution sl;
    cout<<sl.solv(arr,size);
}