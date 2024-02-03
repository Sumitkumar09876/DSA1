#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>m;
    m[1]="Ramu";
    m[2]="kesav";
    m[3]="Rahul";
    for(auto i:m){
        cout<<i.first<<" ";
    }
    cout<<"Count element:"<<m.count(3);
    m.erase(3);
    auto it=m.find(5);
for(auto i=it;i!=m.end();i++){
    cout<<(*i).first<<endl;
}
    

}