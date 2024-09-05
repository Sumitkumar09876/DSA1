/*Sort Elements of an Array by Frequency
Given an array of integers, having some duplicate elements, sort the array by frequency
Ex 1:
Input: N=array[]={1,2,3,2,4,3,1,2}
Output: 2 2 2 1 1 3 3 4
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int solv(vector<int>&arr, int size){
        unordered_map<int,int>store;
        vector<int>result;
        for(int i=0;i<size;i++){
            store[arr[i]]++;
        }
        vector<pair<int,int>>elements;
        for(auto& it:store){
            elements.push_back(it);
        }
        sort(elements.begin(),elements.end(),[](const pair<int,int>&a,pair<int,int>&b){
            if(a.second==b.second){
                return a.first<b.first;
            }
            return a.second>b.second;
        });

        for(const auto it:elements){
            for(int i=0;i<it.second;i++){
                cout<<it.first<<" ";
            }
        }
    }
};
int main(){
    vector<int>arr={1,2,3,2,4,3,1,2};
    int size=arr.size();
    Solution sl;
    sl.solv(arr,size);

}