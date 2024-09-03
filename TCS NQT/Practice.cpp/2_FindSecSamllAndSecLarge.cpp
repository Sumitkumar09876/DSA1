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
        int store=arr[0];
        int storeL=arr[0];
        for(int i=1;i<size;i++){
            if(store>arr[i]){
                store=arr[i];
            }
            if(storeL<arr[i]){
                storeL=arr[i];
            }
        }
        int secondsmall=INT_MAX;
        int secondLarge=INT_MIN;
        for(int i=1;i<size;i++){
                if(secondsmall>arr[i] && arr[i]!=store){
                    secondsmall=arr[i];
                }
                if(secondLarge<arr[i] && arr[i]!=storeL){
                    secondLarge=arr[i];
                }

        }
        cout<<secondLarge<<" "<<secondsmall;
    }
};
int main(){
    int arr[]={1,2,3,7,7,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    Solution sl;
    sl.solv(arr,size);
}