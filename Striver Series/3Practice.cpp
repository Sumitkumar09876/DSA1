/*
QI. Calculate Total Tax
Write a program to calculate the total bill tax amount for a list of billing amounts passed
as an array of long integers.
Up to the amount 1000, there is no tax applicable, subsequently, a flat tax of 10% is
applicable for the remaining amount as per the tax rate.
Note:
All calculations and results should be integer based ignoring fractions
You are expected to write code int the calcTotalTax function only which will receive the
first parameter as the number of items in the array and second parameter as the array
itself. You are not required to take input from the console.
Example
Calculating total tax for a list of 5 billing amount
Input
5
1000 2000 3000 4000 5000
Output
1000
*/
#include<iostream>
using namespace std;
class Solution{
    public:
    long solv(long arr[],long size){
        long sum=0;
        long diff=0;
        for(int i=0;i<size;i++){
            if(arr[i]>1000){
                diff=arr[i]-1000;
                sum+=(diff/100)*10;
            }
        }
        return sum;
    }
};
int main(){
    long arr[]={600, 1000 ,1500 ,3200, 900};
    int size=sizeof(arr)/sizeof(arr[0]);
    Solution sl;
    cout<<sl.solv(arr,size);
}