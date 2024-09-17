/*
Write a program to take input of X and Y in a new line.
Print the number which is nearer the integer when divded by Y.
Ex1:
input: 
X=13
Y=3
Output:12
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int solv(int X,int Y){
        int store=X/Y;
        return store*Y;
    }
};
int main(){
    Solution  sl;
    cout<<sl.solv(25,6);
}