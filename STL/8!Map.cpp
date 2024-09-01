#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<int,int> store;
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<4;i++){
        store[arr[i]]=i;
    }
    map<int,int> :: iterator it;
    for(it= store.begin();it!=store.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    
}