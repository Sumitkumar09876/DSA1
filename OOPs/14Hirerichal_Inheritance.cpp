#include<iostream>
using namespace std;
class father{
    public:
    string name1 = "Xyz";
    public:
    void papa(){
        cout<<"I am father of my son";
    }
    
};
class mother{
    public:
    string name2 = "Zxy";
    public:
    void mom(){
        cout<<"I am mother of my son";
    }
};
class son : public father,public mother{
    public: 
    string name3= "Yzx";
    void beta(){
        cout<<"My father name is "<<name1<<endl;
        cout<<"My mother name is "<<name2<<endl;
        cout<<"My name is "<<name3;
    }
};
int main(){
son so;
so.papa();
cout<<endl;
so.mom();
cout<<endl;
so.beta();
}