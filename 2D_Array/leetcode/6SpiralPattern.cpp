#include<iostream>
#include<vector>
using namespace std;
class spiral{
    public:
    vector<int> pattern(vector<vector<int> >& arr){
        vector<int>ans;
        int row=arr.size();
        int col=arr[0].size(); 

        int count =0;
        int total=row*col;

        int startingrow=0;
        int startingcol=0;
        int endingrow=row-1;
        int endingcol=col-1;

        while(count<total){
            for(int index=startingcol;count<total && index<=endingcol;index++){
                ans.push_back(arr[startingrow][index]);
                count++;
            }
            startingrow++;
            for(int index=startingrow;count<total && index<=endingrow;index++){
                ans.push_back(arr[index][endingcol]);
                count++;
            }
            endingcol--;
            for(int index=endingcol;count<total && index>=startingcol;index--){
                ans.push_back(arr[endingrow][index]);
                count++;
            }
            endingrow--;
            for(int index=endingrow;count<total && index>=startingrow;index--){
                ans.push_back(arr[index][startingcol]);
                count++;
            }
            startingcol++;
        }
        return ans;
    }
    
};
int main(){
    vector<vector<int>>arr={{1,2,3},{4,5,6},{7,8,9}};
    spiral sp;
   vector<int>result=sp.pattern(arr);
   for(int i:result){
    cout<<i<<" ";
   }
}