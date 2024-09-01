/*
26 April Shift 2 Q1
Given two integers,find sum of cubes all numbers in the range of n & m.
Input n=4, m=9
Output 1989
*/
#include<iostream>
#include<math.h>
using namespace std;
class Solution{
    public:
    int Cube(int n, int m){
        int sum=0;
        for(int i=n;i<=m;i++){
            sum += pow(i,3);
        }
        return sum;
    }
};
int main(){
    Solution sl;
    cout<<sl.Cube(4,9);
}