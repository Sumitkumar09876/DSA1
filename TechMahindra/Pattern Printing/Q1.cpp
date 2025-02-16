/*
Example 1: Program to print half pyramid using * 
* 
* * 
* * * 
* * * * 
* * * * *
*/
#include<iostream>
using namespace std;
class Solution{
    public:
    int solv(int rows){
        for(int i=1;i<=rows;i++){
            for(int j=1;j<=i;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
};
int main(){
    Solution sl;
    sl.solv(5);
}
