#include<iostream>
using namespace std;
class function{
    public:
    void func(){
        cout<<"Function 1";
    }
    public:
    void func(string str){
        cout<<str;
    }
    public:
    void func(string str1,int num){
        cout<<str1<<" "<<num;
    }
};
int main(){
    function fu;
    fu.func();
    cout<<endl;
    fu.func("Function 2");
    cout<<endl;
    fu.func("Function",3);
}