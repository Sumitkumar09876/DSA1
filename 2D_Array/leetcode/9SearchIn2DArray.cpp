#include<iostream>
#include<vector>
using namespace std;
class Search{
    public:
    bool Array(vector<vector<int>>& arr,int key){
        int row=arr.size();
        int col=arr[0].size();
        int rowindex=0;
        int colindex=col-1;
        while(rowindex<row && colindex>=0){
            int element=arr[rowindex][colindex];
            if(element== key){
                return 1;
            }
            else if(element <key){
                rowindex++;
            }
            else{
                colindex++;
            }
        }
        return 0;
    }
};
int main(){
    vector<vector<int>>arr={{1,4,7},{2,5,8},{3,6,9}};
    int key;
    cout<<"Enter the key:";
    cin>>key;
    Search se;
    cout<<se.Array(arr,key);
}