#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>m;
    m[1]="Ramu";
    m[2]="kesav";
    m[3]="Rahul";
    for(auto i:m){
        cout<<i.first;
    }
    

}