#include<iostream>
using namespace std;
class overriding{
    public:
    int func(){
        cout<<"Function 1";
    }
};
class overboard:public overriding{
    public:
    int func(){
        cout<<"Function 2";
    }
};
int main(){
    overboard over;
    over.func();
}