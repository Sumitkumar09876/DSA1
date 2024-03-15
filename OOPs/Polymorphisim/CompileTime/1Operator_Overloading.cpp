#include<iostream>
using namespace std;
class B{
    public:
    int a,b;
    public:
    void operator +(B &obj){
        int store1=this->a;
        int store2=obj.a;
        cout<<"Result:"<<store2-store1;
    }
};
int main(){
  B obj1,obj2;
  obj1.a=22;
  obj2.a=34;
  obj1+obj2;  
}