//double queue
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    d.push_back(34);
    d.push_front(45);
    for(int i=0;i<2;i++){
        cout<<" "<<d[i];
    }
    cout<<"Front element:"<<d.front()<<endl;
    cout<<"Element at index:"<<d.at(1)<<endl;
    cout<<"To erase:";
    d.erase(d.begin(),d.begin()+1);
}