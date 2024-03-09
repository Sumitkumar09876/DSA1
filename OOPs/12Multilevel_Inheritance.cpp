#include<iostream>
using namespace std;
class Animal{
    public:
    string race="Cat";
    void Beast(string str){
        cout<<"I am the "<<str;
    }
};
class landanimal:public Animal{
    public:
    void Cat(){
        cout<<"I belong to "<<race<<" family";
    }
};
class Carnivores:public landanimal{

};
int main(){
Carnivores car;
car.Beast("Tiger");
cout<<endl;
car.Cat();
}