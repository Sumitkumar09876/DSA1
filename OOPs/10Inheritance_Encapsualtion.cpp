#include<iostream>
using namespace std;
class human{
    private:
    int weight;
    int height;
    int age;
    public:
    int getweight(){
        return weight;
    }
    void setweight(int value){
        weight = value;
    }
};
class man:public human{
    public:
    int color;
    public:
    void sleep(){
        cout<<"My weight is:"<<getweight();
    }
};
int main(){
    man m;
    m.setweight(45);
    cout<<m.getweight();
    m.sleep();
}

