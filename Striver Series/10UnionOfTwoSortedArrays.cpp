#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    vector<int>solv(vector<int>arr1,vector<int>arr2,int size1,int size2){
        int min1=arr1[0];
        int max1=arr1[0];
        for(int i=0;i<size1;i++){
            if(min1>arr1[i]){
                min1=arr1[i];
            }
            if(max1<arr1[i]){
                max1=arr1[i];
            }
        }
        int min2=arr2[0];
        int max2=arr2[0];
        for(int i=0;i<size2;i++){
            if(min2>arr2[i]){
                min2=arr2[i];
            }
            if(max2<arr2[i]){
                max2=arr2[i];
            }
        }
        int min=0;
        int max=0;
        if(min1<=min2){
            min=min1;
        }else{
            min=min2;
        }
        if(max1>=max2){
            max=max1;
        }else{
            max=max2;
        }
        vector<int>store;
        for(int i=min;i<=max;i++){
            store.push_back(i);

        }
        return store;
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