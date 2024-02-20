#include<iostream>
using namespace std;
class sum{
    public:
    void row(int arr[][3]){
        
        for(int row=0;row<3;row++){
            int temp=0;
            for(int col=0;col<3;col++){
                 temp=arr[row][col]+temp;
            }
            cout<<temp<<endl;       
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
    sum s;
    s.row(arr);
}