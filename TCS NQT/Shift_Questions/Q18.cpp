/*
6 May 2024 S2 Q2
Write a program that accepts two integers ,nn and mm and prints all prime numbers between nn and mm (inclusive) such that the sum of their digits is also a prime number.
Ex1:
Input:20 25
Output: 23
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool isPrime(int num){
        if(num<=1){
            return false;
        }
        for(int i=2;i*i<=num;i++){
            if(num%i==0){
                return false;
            }
        }
        return true;
    }
    int solv(int n,int m){
        for(int i=n+1;i<m;i++){
            int store=i%10;
            int hold=i/10;
            int sum=hold+store;
            if(isPrime(store) && isPrime(hold) && isPrime(sum)){
                cout<<i<<" "<<endl;
            }
            
        }
    }
};
int main(){
    Solution sl;
    sl.solv(1,30);
}
