#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int solv(vector<int>arr,int size,int k){
        int i=0,j=0;
        int sum=0;
        int maxlen=0;
        while(j<size){
            
            sum=sum+arr[j];
            while(i<=j && sum>k){
                sum=sum-arr[i];
                i++;
            }
            if(sum==k){
                maxlen=max(maxlen,j-i+1);
            }
            j++;
        }
        return maxlen;
    }
};
int main(){
    vector<int>arr={2,3,5,1,9};
    int size=arr.size();
    Solution sl;
    cout<<sl.solv(arr,size,10);
}