#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    vector<int> solv(vector<int>&arr,int size){
        int store=arr[0];
        for(int i=0;i<size;i++){
            if(i==size-1){
                arr[i]=store;
            }else{
                arr[i]=arr[i+1];
            }
        }
        return arr;
    }
};
int main(){
    vector<int>arr={1,2,3,4,5,6};
    int size=arr.size();
    Solution sl;
    for(int num:sl.solv(arr,size)){
        cout<<num<<" ";
    }
}