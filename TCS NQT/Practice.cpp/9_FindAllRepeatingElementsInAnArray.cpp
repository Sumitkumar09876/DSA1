/*
Find all repeating elements in an array
Ex 1:
Input:
arr[]={1,1,2,3,4,4,5,2}
Output:
1,2,4

Ex 2:
Input:
arr[]={1,1,0}
Output:
1
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
            if(it.second>1){
                cout<<it.first<<" ";
            }
        }
    }
};
int main(){
    int arr[]={1,1,2,3,4,4,5,2};
    int size=sizeof(arr)/sizeof(int);
    Solution sl;
    sl.solv(arr,size);

}