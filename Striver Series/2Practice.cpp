/*
Q2.Write a program to calculate and return the sum of distances between the adjacent number in an
array of positive integers.
Note : You are expected to write code in the findTotalDistance function only which receive the first
parameter as the numbers of items in the array and second paramter as the array itself. You are not
required to take the input from the console.
Example Finding the total distance between adjacent items of a list of 5 numbers.
Input 1 : S
input 2 : 10 11 7 12 14
Output 12
*/
#include<iostream>
using namespace std;
class Solution{
    public:
    int solv(int arr[],int size){
        int sum=0;
        for(int i=0;i<size-1;i++){
            if(arr[i]>=arr[i+1]){
                cout<<sum<<endl;
            }if(arr[i]<arr[i+1]){
                cout<<sum<<endl;
            }
        }
        return sum;
    }
};
int main(){
    int arr[]={10,11,7,12,14};
    int size=sizeof(arr)/sizeof(arr[0]);
    Solution sl;
    cout<<sl.solv(arr,size);
}