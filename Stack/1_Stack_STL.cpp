#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(10);
    s.push(11);
    cout<<"Element in Stack "<<s.top()<<endl;
    s.pop();
    cout<<"Element in Stack "<<s.top()<<endl;
    if(s.empty()){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"stack is not Empty"<<endl;
    }
    cout<<"Size of Stack:"<<s.size();
}