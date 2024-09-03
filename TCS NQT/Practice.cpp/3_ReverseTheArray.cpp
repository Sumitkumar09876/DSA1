/*Reverse the array
Input N=5
    arr[]={5,4,3,2,1};
Output arr[]={1,2,3,4,5}
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void solv(int arr[],int n){
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1-i;j++){
                if(arr[j]>arr[j+1]){
                int hold=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=hold;
            }
            }
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    int arr[]={5,4,3,2,1};
    int n=5;
    Solution sl;
    sl.solv(arr,n);
}