/*
Capitalize first and last character of each word of a string
Given a string, write a program to Capitalize the first and last character of each word of that string.
Ex1:
Input: String str= "take u forward is awesome"
output: "TakE U ForwarD IS AwesomE"
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string solv(string str){
        string store;
        for(int i=0;i<str.length();i++){
            if(i==0 || str[i-1]==' '){
                store.push_back(str[i]-32);
            }else if(i==str.length()-1 || str[i+1]==' '){
                store.push_back(str[i]-32);
            }else{
                store.push_back(str[i]);
            }
        }
        return store;
    }
};
int main(){
    string str="take u forward is awesome";
    Solution sl;
    cout<<sl.solv(str);
}