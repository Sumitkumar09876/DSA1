/*
Remove all vowels from the String
Ex1
Input: Str="take u forward"
Output: tk frwrd

Ex2
Input: Str = "I am very happy today"
output: m vry hppy tdy
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int solv(string str){
        string store;
        for(int i=0;i<str.length();i++){
            if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U'){
                store.push_back(str[i]);
            }
        }
        for(int i=0;i<store.length();i++){
            cout<<store[i];
        }
    }
};
int main(){
    string str = "I am very happy today";
    Solution sl;
    sl.solv(str);
}
