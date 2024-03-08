#include<iostream>
using namespace std;
class des{
    public:
    int score;
    public:
    des(int score){
        cout<<"This is a constructor!" << endl;
    }
    ~des(){
        cout<<"This is a destructor!";
        cout<<endl
    }

};
int main(){
    des d(34);
    des *ptr=new des(34);
    delete ptr;

}