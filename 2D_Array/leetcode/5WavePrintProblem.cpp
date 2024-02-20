#include<iostream>
using namespace std;
class wave{
    public:
    int pattern(int arr[][3]){
        int row,col;
     for(row=0;row<3;row++){
        for(col=0;col<3;col++){
                    cout<<arr[col][row]<<" ";
        }
        cout<<endl;
     }
     cout<<"-----Wave Pattern-----"<<endl;
     for (row = 0; row < 3; row++)
     {
        if(row%2==0){
            for (col = 0; col < 3; col++)
        {
            cout<<arr[row][col]<<" ";
        }
        }
        else if(row%2==1){
            for (col = 2; col >= 0; col--)
        {
            cout<<arr[row][col]<<" ";
        }
        } 
        
     }
     
     return 0;
    }
};
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    wave w;
    w.pattern(arr);
}

//Time Complexity:O(nm)
//n-row;m-col