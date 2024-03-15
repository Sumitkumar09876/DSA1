#include<iostream>
using namespace std;
class Op{
    public:
    int a;
    public:
    void operator ()(){
        cout<<"hello world "<<this->a;
    }
};
int main(){
    Op o;
    o.a=12;
    o();
}