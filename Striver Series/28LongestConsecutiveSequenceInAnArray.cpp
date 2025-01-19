/*
Problem Statement: You are given an array of ‘N’ integers. You need to find the length of the longest sequence which contains the consecutive elements.
Example 1:
Input:
 [100, 200, 1, 3, 2, 4]
Output:
 4
Explanation:
 The longest consecutive subsequence is 1, 2, 3, and 4.
*/
#include<iostream>
using namespace std;
class Solution{
    public:
    int solv(int arr[],int size){
        int sum=0;
        int cnt=1;
        for(int i=0;i<size;i++){
            for(int j=0;j<size-i-1;j++){
                if(arr[j]>arr[j+1]){
                    int store=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=store;
                }
            }
        }
        for(int i=0;i<size;i++){
            sum=arr[i]+1;
            if(sum==arr[i+1]){
                cnt++;
            }else{
                sum=0;
            }
        }
        return cnt;
    }
};
int main(){
    int arr[]={3, 8, 5, 7, 6};
    int size=sizeof(arr)/sizeof(arr[0]);
    Solution sl;
    cout<<sl.solv(arr,size);
}