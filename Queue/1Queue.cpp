#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(23);
    cout<<"Size of queue:"<<q.size()<<endl;
    q.push(45);
    q.push(21);
    cout<<"Size of queue:"<<q.size()<<endl;
    q.pop();
    cout<<"front element:"<<q.front()<<endl;
}