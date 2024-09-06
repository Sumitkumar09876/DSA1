/*
find all non repeating elements in an array
Ex
Input:
Nums=[1,2,-1,1,3,1]
Output:
2,-1,3
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void solv(int arr[],int size){
        map<int,int>store;
        for(int i=0;i<size;i++){
            store[arr[i]]++;
        }
        for(auto& it:store){
            if(it.second<=1){
                cout<<it.first<<" ";
            }
        }
    }
};
int main(){
    int arr[]={1,2,-1,1,3,1};
    int size=sizeof(arr)/sizeof(int);
    Solution sl;
    sl.solv(arr,size);

}