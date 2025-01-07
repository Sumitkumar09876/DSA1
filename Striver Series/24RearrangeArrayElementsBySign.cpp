#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    vector<int>solv(vector<int>arr,int size){
        vector<int>neg;
        vector<int>pos;
        for(int i=0;i<size;i++){
            if(arr[i]>=0){
                pos.push_back(arr[i]);
            }if(arr[i]<0){
                neg.push_back(arr[i]);
            }
        }
        vector<int>ele;
        for(int i=0;i<size/2;i++){
                ele.push_back(pos[i]);
                ele.push_back(neg[i]);
        }
        return ele;
    }
};
int main(){
    vector<int>arr={1,2,-3,-1,-2,3};
    int size=arr.size();
    Solution sl;
    vector<int>result=sl.solv(arr,size);
    for(auto it:result){
        cout<<it<<" ";
    }
}