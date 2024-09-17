/*
Write a program that generates a password adhering to the following conditions:
1.The password must consist of at least 8 characters.
2.It must contain at least one special character from the set{'#','@'}.
3.It must contain at least one uppercase letter and one lowercase letter.
4.Each character in the password should be incremented by the number of times specified by the second input.

Your program should take two inputs:
1.A string representing the initial password.
2.An integer representing the number of times each character should be incremented.
Your program should then generate and output the modified password.

Ex1:
Input1:werV432@
INput2:2
Output:ygtX653#
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string solv(string str,int num){
        string pass;
        for(int i=0;i<str.length();i++){
            if(str[i]=='#'){
                pass.push_back('@');
            }else if(str[i]=='@'){
                pass.push_back('#');
            }else{
                if(isalpha(str[i])){
                    int ascii=int(str[i]);
                    if(ascii==122){
                        pass.push_back((str[i]-25)+(num-1));
                    }else if(ascii==90){
                        pass.push_back((str[i]-25)+(num-1));
                    }
                    else{
                        pass.push_back(str[i]+2);
                    }
                }else if(isdigit(str[i])){
                    int ascii=int(str[i]);
                    if(ascii==57){
                        pass.push_back((str[i]-9)+(num-1));
                    }else{
                        pass.push_back(str[i]);
                    }
                }
                
            }
        }
        return pass;
    }
};
int main(){
    Solution sl;
    cout<<sl.solv("werV432@",2);
}