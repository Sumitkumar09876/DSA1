/*
Reverse a string
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string solv(string str){
        string store;
        for(int i=str.length()-1;i>=0;i--){
            store.push_back(str[i]);
        }
        return store;
    }
};
int main(){
    string str={" What is your name?"};
    Solution sl;
    cout<<sl.solv(str);
}