#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Solution{
    public:
    int solv(vector<int>&arr,int size){
        map<int,int>store;
        for(int i=0;i<size;i++){
            store[arr[i]]++;
        }
        for(auto& it:store){
            if(it.second>(size/2)){
                return it.first;
            }
        }
        return -1;
    }
};
int main(){
    vector<int>arr={4,4,2,4,3,4,4,3,2,4};
    int size=arr.size();
    Solution sl;
    cout<<sl.solv(arr,size);
}