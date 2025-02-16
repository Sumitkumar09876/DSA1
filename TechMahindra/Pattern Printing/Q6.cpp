/*
A
A B
A B C
A B C D
A B C D E
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<char('a'+j-1)<<" ";
        }
        cout<<endl;
    }
}