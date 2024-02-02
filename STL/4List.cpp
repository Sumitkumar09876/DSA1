#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l;
    l.push_back(1);
    l.push_front(34);
    cout<<"First Element:"<<l.front()<<endl;
    cout<<"Last Element:"<<l.back();
    l.erase(l.begin());

}
