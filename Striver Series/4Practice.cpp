/*
. An algorthim to remove all the duplicate numbers of the list so that the list contains
only distinct numbers in the same order as they appear in the input list
Input
The first line of the input consists of an integer size, representing the number of elements in
the list (N). The second line consists of N space- separated integers - arr[Ol,
arr[ll.........., arr[N-11 representing the list of positive integers.
Output
Print space-separated integers representing the distinct elements obtained by removing all
the duplicate elements from the given list.
Input : 8
Input: 11321454
Output
13245
*/
#include<iostream>
#include<set>
using namespace std;
class Solution{
    public:
    int solv(int arr[],int size){
        set<int>store;
        for(int i=0;i<size;i++){
            store.insert(arr[i]);
        };
        for(auto& it:store){
            cout<<it<<" ";
        }
        return 0;
    }
};
int main(){
    int arr[]={1,1,3,2,1,4,5,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    Solution sl;
    sl.solv(arr,size);
}