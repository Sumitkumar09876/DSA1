/*
Problem Statement: Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.
Examples 1:
Input:
 matrix=[[1,1,1],[1,0,1],[1,1,1]]

Output:
 [[1,0,1],[0,0,0],[1,0,1]]

Explanation:
 Since matrix[2][2]=0.Therfore the 2nd column and 2nd row wil be set to 0.
*/
#include<iostream>
#include<vector>
using namespace std;
class solution{
    public:
    vector<vector<int>> row1(int i,int row,vector<vector<int>>arr){
        for(int j=0;j<row;j++){
            if(arr[i][j]!=0){
                arr[i][j]=-1;
            }
        }
        return arr;
    }
    vector<vector<int>> col1(int j,int column,vector<vector<int>>arr){
        for(int i=0;i<column;i++){
            if(arr[i][j]!=0){
                arr[i][j]=-1;
                
            }
        }
        return arr;
    }
    vector<vector<int>> convert(vector<vector<int>>arr,int row,int column){
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                if(arr[i][j]==-1){
                arr[i][j]=0;
                cout<<arr[i][j]<<" "<<i<<j<<endl;
            }
        }
    }
    }
    void solv(vector<vector<int>>arr,int row ,int column){
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                if(arr[i][j]==0){
                row1(i,row,arr);
                col1(j,column,arr);
            }
            }
        }
        convert(arr,row,column);
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                //cout<<arr[i][i]<<" ";
            }
        }
    }
    
};
int main(){
    vector<vector<int>>arr={{1,1,1},{1,0,1},{1,1,1}};
    int row=arr.size();
    int column=arr[0].size();
    solution sl;
    sl.solv(arr,row,column);
}