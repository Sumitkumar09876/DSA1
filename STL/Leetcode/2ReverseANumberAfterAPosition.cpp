#include<iostream>
#include<vector>
using namespace std;
class reverse{
    public:
    int rev(vector<int> &arr,int size,int m){
        vector<int>revarr;
        for(int i=size-1;i>m;i--){
            revarr.push_back(arr[i]);
        }
        for(int i=0;i<=m;i++){
            revarr.push_back(arr[i]);
        }
        arr=revarr;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    } 
};
int main(){
    vector<int>arr;
    int i,size,m;
    cout<<"Enter the size of arr:";
    cin>>size;
    cout<<"Enter the position after which array will be reversed:";
    cin>>m;
    cout<<"Enter the element:";
    for(i=0;i<size;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    reverse re;
    re.rev(arr,size,m);
}