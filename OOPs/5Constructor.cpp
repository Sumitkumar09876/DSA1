#include<iostream>
using namespace std;
class Hero{
    private:
    int num;
    public:
    Hero(){
        cout<<"What is your name:"<<endl;
    }
    Hero(int num){
        cout<<"This is a paremeterized constructor:"<<endl;
        this->num=num;
        cout<<num<<endl;
    }
};
int main(){
    Hero ramesh;//Statically called
    Hero *ptr = new Hero;//Dynamically called
    Hero obj(88);
}