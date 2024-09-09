/*
Find the ASCII value of a character
Ex1
Input: c='A'
Output: 65

Ex2 
Input: c='e'
Output: 101
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int solv(char str){
        int ascii=int(str);
        return ascii;
    }
};
int main(){
    char str='A';
    Solution sl;
    cout<<sl.solv(str);
}
