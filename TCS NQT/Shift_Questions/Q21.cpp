/*
8 May 2024 S2 Q1
Given size of n and list of array elements and we should print if the given element in array is divisible by 3 then replace the element with "Three" and if the element in array is divisible by 5 then replace the element with "Five" if the element divisible by 3 and 5 both then replace the element with "ThreeFive" if the element in the array is not satisfying the above conditions then put the element as it is and print the array.
Ex1:
Input:
N=4
[2 3 4 5]
Output:2 Three 4 Five
Ex2:
Input:
N=2
[15 3]
Output: ThreeFive Three
*/
#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
class Solution{
    public:
    vector<string> solv(vector<int>&arr, int n){
        vector<string>str(n);
        for(int i=0;i<n;i++){
            if(arr[i]%3==0 && arr[i]%5==0){
                str[i]="ThreeFive";
            }else if(arr[i]%3==0){
                str[i]="Three";
            }else if(arr[i]%5==0){
                str[i]="Five";
            }else{
                str[i]=to_string(arr[i]);
            }
        }
        return str;
    }
};
int main(){
    string str="[15 3]";
    vector<int>arr;
    string trimedin=str.substr(1,str.size()-2);
    stringstream ss(trimedin);
    string item;
    while(getline(ss,item,' ')){
        arr.push_back(stoi(item));
    }
    Solution sl;
    vector<string>result=sl.solv(arr,arr.size());
    for(const auto& it:result){
        cout<<it<<" ";
    }
}