#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int>q; // greatest element at the top
    priority_queue<int,vector<int>,greater<int>>mini; //smallest number at the top
    mini.push(45);
    mini.push(56);
    mini.push(88);

    q.push(45);
    q.push(56);
    q.push(88);
    cout<<"Element at the top:"<<mini.top()<<endl;
    cout<<"Element at the top:"<<q.top()<<endl;

    int size=q.size();
    for(int i=0;i<size;i++){
        cout<<q.top()<<endl;
        q.pop();
    }
}