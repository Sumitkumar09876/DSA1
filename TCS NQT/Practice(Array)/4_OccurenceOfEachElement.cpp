/*Count frequency of each element in the array
Given an array, we have found the number of occurrence of each element in the array
Input arr[]={10,5,10,15,10,5}
Ouput 10 3
5 2
15 1
*/
#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    void solv(int arr[],int n){
        vector<int>store;
        unordered_map<int,int>hold;
        for(int i=0;i<n;i++){
            hold[arr[i]]++;
        }
        for(auto& it:hold){
            cout<<it.first<<" "<<it.second<<endl;
        }
    }
};
int main(){
    int arr[]={10,5,10,15,10,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    solution sl;
    sl.solv(arr,size);
}