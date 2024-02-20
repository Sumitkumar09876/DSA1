#include<iostream>
using namespace std;
class spiral{
    public:
    int pattern(int arr[][3]){
        int row,col;
        for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    }
};
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
}