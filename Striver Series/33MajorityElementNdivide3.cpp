/*
Problem Statement: Given an array of N integers. Find the elements that appear more than N/3 times in the array. If no such element exists, return an empty vector.
Example 1:
Input Format
: N = 5, array[] = {1,2,2,3,2}
Result
: 2
Explanation:
 Here we can see that the Count(1) = 1, Count(2) = 3 and Count(3) = 1.Therefore, the count of 2 is greater than N/3 times. Hence, 2 is the answer.
*/
#include<bits/stdc++.h>
#include<map>
using namespace std;
class Solution{
    public:
    int solv(int arr[],int size){
        map<int,int>store;
        for(int i=0;i<size;i++){
            store[arr[i]]++;
        };
        for(const auto& it:store){
            if(it.second>(size/3)){
                cout<<it.first<<" ";
            }
        }
    }
};
int main(){
    int arr[]={11,33,33,11,33,11};
    int size=sizeof(arr)/sizeof(arr[0]);
    Solution sl;
    sl.solv(arr,size);
}