#include<iostream>
#include<vector>
using namespace std;
class reverse{
    public:
        int rev(vector<int>arr,int size){
            vector<int>reversearr;
            for(int i=size-1;i>=0;i--){
                reversearr.push_back(arr[i]);
            }
            arr=reversearr;
            for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }
        }
};
int main(){
    vector<int>arr;
    int size;
    cout<<"Enter the size of array:";
    cin>>size;
    cout<<"Enter the element";
    for(int i=0;i<size;i++){
       int num;
       cin>>num;
       arr.push_back(num);
    }
    reverse re;
    re.rev(arr,size);

}