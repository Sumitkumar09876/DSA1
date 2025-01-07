#include<iostream>
#include<vector>
#include<set>
using namespace std;
class Solution{
    public:
    vector<int>solv(vector<int>arr1,vector<int>arr2,int size1,int size2){
        set<int>store;
        for(int i=0;i<size2;i++){
            arr1.push_back(arr2[i]);
        }
        int size=arr1.size();
        for(int i=0;i<size;i++){
            store.insert(arr1[i]);
        }
        vector<int>hold(store.begin(),store.end());
        
        return hold;
    }
};
int main(){
    vector<int>arr1={2, 2, 3, 4, 5};
    vector<int>arr2={1, 1, 2, 3, };
    int size1=arr1.size();
    int size2=arr2.size();
    Solution sl;
    vector<int>result=sl.solv(arr1,arr2,size1,size2);
    for(auto it:result){
        cout<<it<<" ";
    }
}