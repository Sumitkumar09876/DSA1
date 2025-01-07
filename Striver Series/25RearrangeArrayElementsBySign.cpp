//optimal
#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    vector<int>solv(vector<int>arr,int size){
        int neg=1;
        int pos=0;
        vector<int>ele(size);
        for(int i=0;i<size;i++){
            if(arr[i]<0){
                ele[neg]=arr[i];
                neg+=2;
            }else{
                ele[pos]=arr[i];
                pos+=2;
            }
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