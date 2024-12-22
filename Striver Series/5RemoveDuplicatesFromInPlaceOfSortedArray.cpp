#include<iostream>
#include<set>
using namespace std;
class Solution{
    public:
    int solv(int arr[],int size){
        set<int>store;
        for(int i=0;i<size;i++){
            store.insert(arr[i]);
        }
        for(auto i:store){
            cout<<i<<" ";
        }
    }
};
int main(){
int arr[]={1,1,2,2,2,3,3};
int size= sizeof(arr)/sizeof(arr[0]);
Solution sl;
sl.solv(arr,size);
}