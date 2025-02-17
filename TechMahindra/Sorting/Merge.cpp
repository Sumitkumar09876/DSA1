/*
Merge Sort Algorithm
Problem:  Given an array of size n, sort the array using Merge Sort.

Example 1:
Input: N=5, arr[]={4,2,1,6,7}
Output: 1,2,4,6,7,

Example 2:
Input: N=7,arr[]={3,2,8,5,1,4,23}
Output: 1,2,3,4,5,8,23
*/
#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    void Merge(vector<int>&arr, int low, int mid, int high){
        vector<int>temp;
        int left=low;
        int right=mid+1;
        while(left<=mid && right<=high){
            if(arr[left]<arr[right]){
                temp.push_back(arr[left]);
                left++;
            }else{
                temp.push_back(arr[right]);
                right++;
            }
        }
        while (left<=mid)
        {
            temp.push_back(arr[left]);
            left++;
        }
        while (right<=high)
        {
            temp.push_back(arr[right]);
            right++;
        }
        for(int i=low;i<=high;i++){
            arr[i]=temp[i-low];
        }
        
    }
    void MergeSort(vector<int>&arr,int low, int high){
        if(low>=high){
            return;
        }
        int mid=(low+high)/2;
        MergeSort(arr,low,mid);
        MergeSort(arr,mid+1,high);
        if(arr[mid]<=arr[mid+1]){
            return;
        }
        Merge(arr,low,mid,high);
    }
};
int main(){
    vector<int>arr={3,2,8,5,1,4,23};
    int size=arr.size();
    Solution sl;
    sl.MergeSort(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}