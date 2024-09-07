/*
Given a string, write a program to count the number of vowels, consonants and spaces in the string.
Ex1
Input: string str="Take u forward is Awesome"
Output: Vowels:10
consonants:11
white spaces:4
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int solv(string str){
        int vowels=0;
        int consonant=0;
        int spaces=0;
        for(int i=0;i<str.length();i++){
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
                vowels++;
            }
            else if(str[i]==' '){
                spaces++;
            }
            else if(isalpha(str[i])) {
                consonant++;
            }
        }
        cout<<"Vowels:"<<vowels<<endl;
        cout<<"Consonant:"<<consonant<<endl;
        cout<<"white spaces:"<<spaces<<endl;
    }
};
int main(){
    string str="Take u forward is Awesome";
    Solution sl;
    sl.solv(str);
}