#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int solv(vector<int>arr,int size){
        int cnt=0,max_cnt=INT_MIN;
        for(int i=0;i<size;i++){
            if(arr[i]==1){
                cnt++;
                
            }
            else{
                cnt=0;
            }
        max_cnt=max(max_cnt,cnt);
        }
        return max_cnt;
    }
};
int main(){
    vector<int>arr={0,0};
    int size=arr.size();
    Solution sl;
    cout<<sl.solv(arr,size);
}