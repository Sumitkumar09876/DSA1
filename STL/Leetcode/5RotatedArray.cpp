#include<iostream>
#include<vector>
using namespace std;
class rotate{
    public:
    int rota(vector<int>arr,int ele){
        vector<int>rot;
        for(int i=ele+1;i<arr.size();i++){
            rot.push_back(arr[i]);
        }
        for(int i=0;i<=ele;i++){
            rot.push_back(arr[i]);
        }
        arr=rot;
        for(int i=0;i<arr.size();i++){
            cout<<" "<<arr[i];
        }
    }
};
int main(){
    vector<int>arr={1,2,3,4,5,6,7};
    int ele;
    cout<<"enter the position:";
    cin>>ele;
    rotate ro;
    ro.rota(arr,ele);
}