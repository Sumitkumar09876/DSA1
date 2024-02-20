#include<iostream>
using namespace std;
class searc{
    public:
    bool found(int arr[][3],int target){
        for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            if(arr[row][col] == target){
                return true;
            }
        }
    }
    return 0;
    }
};
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int target;
    int row,col;
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter the target element:";
    cin>>target;
    searc se;
    if(se.found(arr, target)){
        cout<<"found";
    }
    else{
        cout<<"Not found:";
    }
}