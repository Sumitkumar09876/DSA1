//Remove Duplicates in-place from Sorted Array
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int solv(int arr[],int n){
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
    
}