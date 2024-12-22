#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    vector<int>solv(vector<int>arr,int size){
        vector<int>store;
        int cnt=0;
        for(int i=0;i<size;i++){
            if(arr[i]!=0){
                store.push_back(arr[i]);
            }
            if(arr[i]==0){
                cnt++;
            }
        }
        for(int i=0;i<cnt;i++){
            store.push_back(0);
        }
        arr=store;
        return arr;
    }
};
int main(){
    vector<int>arr={1,2,0,1,0,4,0};
    int size=arr.size();
    Solution sl;
    vector<int>result=sl.solv(arr,size);
    for(auto it:result){
        cout<<it<<" ";
    }
}