//kadane's Algorithm
#include<iostream>
using namespace std;
class Solution{
    public:
    long long solv(int arr[],int size){
        long long maxi=LONG_LONG_MIN;
        long long sum=0;
        for(int i=0;i<size;i++){
            sum+=arr[i];
            if(sum>maxi){
                maxi=sum;
            }if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};
int main(){
int arr[]={-2, 1, -3, 4, -1, 2, 1, -5, 4};
int size=sizeof(arr)/sizeof(arr[0]);
Solution sl;
cout<<sl.solv(arr,size);
}