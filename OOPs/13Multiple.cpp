#include<iostream>
using namespace std;
class Father{
    public:
    void fathername(){
        cout<<"My father name is XYZ";
    }
};
class Mother{
    public:
    void mothername(){
        cout<<"My mother name is ZYX";
    }
};
class Son:public Father,public Mother{

};
int main(){
Son s;
s.fathername();
cout<<endl;
s.mothername();
}