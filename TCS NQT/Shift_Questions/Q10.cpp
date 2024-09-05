/*30 April S1 Q2
Find majority elements
Majority elements is the element which occurs more than or equal to n/2 times the array. Where 'N' is the size of the array.

Input  6
       2 4 2 4 2 4
Output
	2,4
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void Solv(vector<int>&arr,int n){
        map<int,int>sol;
        for(int i=0;i<n;i++){
            sol[arr[i]]++;
        }
        vector<int>store;
        for(auto& pair:sol){
            if(pair.second>=n/2){
                store.push_back(pair.first);
            }
        }
        for(int i:store){
            cout<<i<<" ";
        }
        cout<<endl;
    }
};
int main(){
    vector<int>arr={2,4,2,4,2,4};
    Solution sl;
    sl.Solv(arr,6);
}