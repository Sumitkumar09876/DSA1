/*
9 May 2024 S2 Q1ac
Print all combinations.
Input:3 0 1 2 3
very first element is the input element and rest are array element
3-is the size of the array.

0,01,012,0123,1,12,123,2,23,3
*/
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
class Solution{
    public:
    vector<string>solv(vector<int>arr,int k){
        vector<string>store;
        for(int i=0;i<k;i++){
            string combination="";
            for(int j=i;j<k;j++){
                combination+=to_string(arr[j]);
                store.push_back(combination);
            }
        }
        return store;
    }
};
int main(){
    string str;
    cout<<"Enter the string:";
    getline(cin,str);
    vector<int>arr;
    string trimedin=str.substr(1,str.size()-1);
    stringstream ss(str);
    string item;
    while(getline(ss, item, ' ')){
        arr.push_back(stoi(item));
    }
    Solution sl;
    vector<string>result=sl.solv(arr,4);

    for(size_t i = 0; i < result.size(); ++i){
        cout<<result[i];
        if(i != result.size()-1){
            cout<<",";
        }
    }
}
