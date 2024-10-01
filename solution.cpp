/*
Search an element in an array and return its positon
Ex 1:
Input arr[]={1,2,3,4,5} k=3
Output 2
*/
#include<iostream>
#include<sstream>
#include<vector>
#include<string>
using namespace std;
class Solution{
    public:
    int solv(vector<int>arr,int size,int k){
        for(int i=0;i<size;i++){
            if(arr[i]==k){
                return i;
            }
        }
    }
};
int main(){
    string str="1,2,3,4,5";
    vector<int>store;
    //string trimedin=str.substr(1,str.size()-2);
    stringstream ss(str);
    string item;
    while(getline(ss, item, ',')){
        store.push_back(stoi(item));
    }
    int size=store.size();
    Solution sl;
    cout<<sl.solv(store,size,3);
}