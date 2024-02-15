#include<iostream>
using namespace std;
int main(){
    char name[20];
    cout<<"Enter the name:"<<endl;
    cin>>name;
    name[2] ='\0'; // '\0' - end of string;
    cout<<"Your name:"<<name;
}