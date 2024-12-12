//Remove Duplicates in-place from Sorted Array
#include<iostream>
#include<set>
using namespace std;
class Solution{
    public:
    void solv(int arr[],int n){
        set<int>store;
        for(int i=0;i<n;i++){
            store.insert(arr[i]);
        }
        for(const auto i:store){
            cout<<i<<" ";
        }
    }
};
int main(){
    int arr[]={1,1,1,2,2,3,3,3,3,4,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    Solution sl;
    sl.solv(arr,n);
}