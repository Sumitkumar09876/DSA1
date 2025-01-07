#include<iostream>
using namespace std;
class Solution{
    public:
    pair<int,int> solv(int arr[],int size,int k){
        int sum=0;
        for(int i=0;i<size;i++){
            for(int j=i+1;j<size;j++){
                sum=arr[i]+arr[j];
                if(sum==k){
                    return pair(i,j);
                }
            }
        }
    }
};
int main(){
    int arr[]={2,6,5,8,11};
    int size=sizeof(arr)/sizeof(arr[0]);
    Solution sl;
    pair<int,int>result=sl.solv(arr,size,14);
    cout<<result.first<<" "<<result.second;
}