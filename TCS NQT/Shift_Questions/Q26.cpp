/*
9 May 2024 S2 Q1
Remove duplicate from the string array.
Input:
Watermelon apple orange banana orange lemon apple

Output:
Asc:
apple banana lemon orange watermelon
Desc:
watermelon orange lemon banana apple
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string solv(string str){
        vector<string>store;
        for(int i=0;i<str.length();i++){
            store.push_back(str[i]);
            for(int j=i;j<str.length();j++){
             if(store==str[j]){
                cout<<store<<' ';
             }   
            }
        }
    }
};
int main(){
    string str={"Watermelon apple orange banana orange lemon apple"};
    Solution sl;
    cout<<sl.solv(str);
}