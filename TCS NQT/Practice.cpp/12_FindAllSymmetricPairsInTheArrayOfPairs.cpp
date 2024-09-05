/*Find All the symmetric Pairs in the array of pairs
Ex 1:
Input (1,2),(2,1),(3,4),(4,5),(5,4)
Output: (2,1),(5,4)

Ex 2:
Input (1,5),(2,3),(4,2),(5,1),(2,4)
Output (2,4),(5,1)
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void solv(vector<vector<int>>&arr){
        unordered_map<int,int>store;
        for(const auto& it:arr){
            int first=it[0];
            int second=it[1];
            if(store.find(second)==store.end()){
                store[first]=second;
            }else{
                cout<<"("<<first<<","<<second<<")";
            }
        }
    }
};
int main(){
    vector<vector<int>>arr={{1,5},{2,3},{4,2},{5,1},{2,4}};
    Solution sl;
    sl.solv(arr);
}