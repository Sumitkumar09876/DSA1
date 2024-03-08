#include<iostream>
using namespace std;
class sum{
    private:
    int total;

    public:
    
    int settotal(int a,int b){
        total=a+b;
        return total;
    }
    int gettotal(){
        return total;
    }
    
};
int main(){
sum *s=new sum;
(*s).settotal(45,45);
//s->settotal(75,6);
cout<<s->gettotal()<<endl;
cout<<(*s).gettotal()<<endl;
delete s;
}