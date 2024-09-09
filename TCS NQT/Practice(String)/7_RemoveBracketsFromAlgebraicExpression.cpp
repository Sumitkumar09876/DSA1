/*
Remove brackets from an algebraic expression
Write a program to remove brackets from an algebraic expression
Given an algebraic expression, we need to simplify the expression and remove the brackets.
Ex1
Input: "a+((b-c)+d)"
Output: "a+b-c+d"

Ex2
Input: "(((a-b))+c)"
Output: "a-b+c"
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string solv(string str){
        string store;
        for(int i=0;i<str.length();i++){
            if(str[i]!=')' && str[i]!='('){
                store.push_back(str[i]);
            }
        }
        return store;
    }
};
int main(){
    string str="(((a-b))+c)";
    Solution sl;
    cout<<sl.solv(str);
}