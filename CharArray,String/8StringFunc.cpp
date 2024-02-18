#include<iostream>
#include <string.h>
using namespace std;
int main(){
    char str[20]={"What is your name:"};
    char str2[20]={"What is your name"};
    char str3[20];
    int len=strlen(str);
    cout<<len<<endl;
    int comp=strcmp(str,str2);
    cout<<comp<<endl;
    strcpy(str3,str2);
    cout<<str2;
}