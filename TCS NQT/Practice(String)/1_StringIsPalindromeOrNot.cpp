/*
Check if the given string is palindrome or not
A string is said to be palindrome if the reverse of the string is the same as the string
Ex 1
Input: Str = "ABCDCBA"
Output Palindrome 

Ex 2
Input: Str ="TAKE U FORWARD"
Output: not a palindrome 
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool solv(string str){
        int start=0;
        int end=str.length()-1;
        while(start<end){
            if(str[start]!=str[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
int main(){
    string str="TAKE U FORWARD";
    Solution sl;
    if(sl.solv(str)){
        cout<<"Palindrome";
    }else{
        cout<<"Not a Palindrome";
    }
}