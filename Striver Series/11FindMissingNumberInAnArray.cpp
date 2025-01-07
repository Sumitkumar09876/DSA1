#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int solv(vector<int>arr,int size,int N){
        int s1,s2;
        for(int i=0;i<size;i++){
            s1=arr[i]+s1;
        }
        s2=(N*(N+1))/2;
        return s2-s1;
    }
};
int main(){
    vector<int>arr={1,2,4,5};
    int size=arr.size();
    Solution sl;
    cout<<sl.solv(arr,size,5);
}