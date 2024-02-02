#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,5>a={1,2,3,4,5};
    cout<<"Element in array:";
    for(int i=0;i<5;i++){
        cout<<" "<<a[i];
    }
    cout<<endl;
    cout<<"Element at index:"<<a.at(2)<<endl;
    cout<<"array is empty or not:"<<a.empty()<<endl;
    cout<<"First Element:"<<a.front()<<endl;
    cout<<"Last Element:"<<a.back()<<endl;
    cout<<"Size of array:"<<a.size()<<endl;
}
