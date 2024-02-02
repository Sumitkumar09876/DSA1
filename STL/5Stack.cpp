#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<string>s;
s.push("Sumit");
s.push("Kumar");
cout<<"Elements in stack:"<<s.top()<<endl;
s.pop();
cout<<"Element in stack after pop:"<<s.top()<<endl;
cout<<"Stack is empty or not:"<<s.empty();
}

