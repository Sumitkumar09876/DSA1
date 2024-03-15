#include<iostream>
using namespace std;
class A{
    public:
    int sum1=23;
};
class B:public A{
    public:
    int sum2=7;
};
class D{
    public:
    int sum4=9;
};
class C:public A,public D{
    public:
    int sum3=11;
};
int main(){
C c;
int store1=c.sum1;
int store2=c.sum4;
int store3=c.sum3;
cout<<"Total sum = "<<store1+store2+store3;
}