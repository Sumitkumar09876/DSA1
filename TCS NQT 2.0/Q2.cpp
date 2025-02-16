/*Find second smallest and second largest element in an array
Problem Statement: Given an array, find the second smallest and second largest element in the array. Print -1 in the event that either of them doesn't exist
Example 1:
Input: [1,2,3,7,7,5]
Output: Second smallest = 2
Second largest = 5
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void solv(int arr[],int size){
        int smallest=arr[0];
        int largest=arr[0];
        for(int i=0;i<size;i++){
            if(smallest>arr[i]){
                smallest=arr[i];
            }
            if(largest<arr[i]){
                largest=arr[i];
            }
        }
        int secsmallest=INT_MAX;
        int seclargest=INT_MIN;
        for(int i=0;i<size;i++){
            if(secsmallest>arr[i] && arr[i]!=smallest){
                secsmallest=arr[i];
            }
            if(seclargest<arr[i] && arr[i]!=largest){
                seclargest=arr[i];
            }
        }
        cout<<"Second Smallest:"<<secsmallest<<endl;
        cout<<"Second Largest:"<<seclargest;
    }
};
int main(){
    int arr[]={1,2,3,7,7,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    Solution sl;
    sl.solv(arr,size);
}