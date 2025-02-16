/*Count frequency of each element in the array
Given an array, we have found the number of occurrence of each element in the array
Input arr[]={10,5,10,15,10,5}
Ouput 10 3
5 2
15 1
*/
#include<iostream>
#include<map>
using namespace std;
class Solution{
    public:
    Solution(int arr[],int size){
        map<int,int>store;
        for(int i=0;i<size;i++){
            store[arr[i]]++;
        }
        for(auto it:store){
            cout<<it.first<<":";
            cout<<it.second<<endl;
        }
    }
};
int main(){
    int arr[]={10,5,10,15,10,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    Solution sl(arr,size);
}