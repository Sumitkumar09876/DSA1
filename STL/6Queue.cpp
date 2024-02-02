#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(45);
    q.push(34);
    q.push(56);

    q.pop();
    cout<<"Element at top:"<<q.front()<<endl;
    cout<<"Element at back:"<<q.back()<<endl;
}