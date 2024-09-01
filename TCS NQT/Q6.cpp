/*
Given an array & a integer K we need to find the max element in each of the contiguous subarrary
Input 2,4,7,1,6,3  k=3
Output 7776
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> solv(vector<int>arr, int k){
        vector<int>store;
        int n=arr.size();
        for(int i=0;i<=n-k;i++){
            int max_val=arr[i];
            for(int j=1;j<k;j++){
                if(max_val<arr[i+j]){
                    max_val=arr[i+j];
                }
            }
            store.push_back(max_val);
        }
        return store;
    }
};
int main(){
    vector<int>arr={2,3,7,1,6,3,9};
    Solution sl;
    vector<int>result=sl.solv(arr,3);
    for(int val:result){
        cout<<val;
    }
    cout<<endl;
}
