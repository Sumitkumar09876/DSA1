#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout<<"Capacity of vector:"<<v.capacity()<<endl;
    cout<<"Size of vector:"<<v.size()<<endl;
    cout<<"first Element:"<<v.front()<<endl;
    cout<<"Last Element:"<<v.back()<<endl;
    v.pop_back();

    vector<int>vec(5,1);
    vector<int>last(vec); //copy elements from another vector.here elements of vec is copied to last
    for(int i=0;i<5;i++){
        cout<<" "<<last[i];
    }
}
