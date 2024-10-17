#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string solv(string str){
        string store;
        for(int i=0;i<str.length();i++){
            store=str[i]+store;
        }
        return store;
    }
};
int main(){
    Solution sl;
    cout<<sl.solv("Hello");
}