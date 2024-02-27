#include<iostream>
using namespace std;
int main(){
    int num=38;
    int *ptr=&num;
    cout<<&num<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<(*ptr)+1<<endl;
    string ch="sumit";
    string *ptr1=&ch;
    cout<<ptr1;
} 