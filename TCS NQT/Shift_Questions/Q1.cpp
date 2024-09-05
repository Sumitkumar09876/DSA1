/*
26 April Shift 1 Q1
Find subarray with a given sum in array.Given integer array find subarray with a given sum in it.

Input:
arr=[3,4,-7,1,3,3,1,-4]
target7

Output:
[3,4]
[3,4,-7.3,1,-4]
[1,3,3]
[3,3,1]
*/
#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    void Subarr(vector<int>& arr){
        int i,j,k;
        int size=arr.size();
        for(i=0;i<size;i++){
            int store=0;
            for(j=i;j<size;j++){
                    store += arr[j];
                if(store == 7){
                    for(k=i;k<=j;k++){
                        cout<<arr[k]<<" ";
                    }
                    cout<<endl;
                }
            }
        }
    }
};
int main(){
    vector<int>arr={3,4,-7,1,3,3,1,-4};
    Solution sl;
    sl.Subarr(arr);
}
