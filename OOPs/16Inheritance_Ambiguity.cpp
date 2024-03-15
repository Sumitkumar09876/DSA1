#include<iostream>
using namespace std;
class A{
    public:
    void same(){
        cout<<"Class A";
    }
};
class B:public A{
    public:
    void same(){
        cout<<"Class B";
    }
};
int main(){
    B b;
    b.A::same();//Scope Resolution Operator '::'
    cout<<endl;
    b.B::same();
}