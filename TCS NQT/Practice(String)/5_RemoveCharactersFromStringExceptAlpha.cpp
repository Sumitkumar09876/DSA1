/*
Remove characters from a string except alphabets
Ex1:
Input: string str="take12% *&u ^$#forward"
Ouput: takeuforward
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string solv(string str){
        string store;
        for(int i=0;i<str.length();i++){
            if(isalpha(str[i])){
                store.push_back(str[i]);
            }
        }
        return store;
    }
};
int main(){
    string str="take12% *&u ^$#forward";
    Solution sl;
    cout<<sl.solv(str);
}