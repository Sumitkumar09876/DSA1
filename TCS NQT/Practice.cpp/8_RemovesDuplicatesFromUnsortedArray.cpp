/*
Removes Duplicates from an Unsorted Array
Ex 1
Input  arr[]={2,3,1,9,3,1,3,9}
Output {2,3,1,9}

Ex 2
Input arr[]={4,3,9,2,4,1,10,89,34}
Output {3,4,9,2,1,10,34,89}
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void solv(int arr[],int size){
        unordered_set<int>store;
        for(int i=0;i<size;i++){
            store.insert(arr[i]);
        }
        for(const auto& i:store){
            cout<<i<<" ";
        }
    }
};
int main(){
    int arr[]={4,3,9,2,4,1,10,89,34};
    int size=sizeof(arr)/sizeof(int);
    Solution sl;
    sl.solv(arr,size);
}
