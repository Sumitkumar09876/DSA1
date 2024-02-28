#include<iostream>
using namespace std;
class Hero{
    private:
    int head=34;
    public:
    int gethead(){
        return head;
    }
    int sethead(int val){
        head=val;
        return head;
    }
};
int main(){
    Hero he;
    cout<<he.gethead()<<endl;
    cout<<he.sethead(39);
}