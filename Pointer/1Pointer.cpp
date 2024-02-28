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
    cout<<ptr1<<endl;
    cout<<"Size of num:"<<sizeof(num)<<endl;
    cout<<"Size of pointer:"<<sizeof(ptr)<<endl;
    int *null=0;
    int *ptr2=ptr;
    cout<<ptr2<<"-"<<ptr<<endl;
    cout<<*ptr2<<"-"<<*ptr<<endl;
    int i=10;
    int *t=&i;
    cout<<t<<endl;
    t=t+1;
    cout<<t<<endl;
} 