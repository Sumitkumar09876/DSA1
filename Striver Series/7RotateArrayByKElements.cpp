#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    vector<int> solv(vector<int>&arr, int size, int k){
        k=k%size;
        vector<int>store(size);
        for(int i=0;i<k;i++){
            store[i]=arr[size-k+i];
        }
        for(int i=k;i<size;i++){
            store[i]=arr[i-k];
        }
        return store;
        }
};
int main(){
    vector<int>arr={1,2,3,4,5,6,7};
    int k;
    int size=arr.size();
    cout<<"Enter the element:";
    cin>>k;
    Solution sl;
    vector<int> result=sl.solv(arr,size,k);
    for(auto it:result){
        cout<<it<<" ";
    }
}