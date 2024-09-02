/*29 April S1 Q1
Given an Integer, we need to fing the sum of values of that table
Input 10   output 550;
Ex:10*1+10*2...10*10=550;
*/
#include<bits/stdc++.h>
using namespace std;
#include<math.h>
class Solution{
    public:
    int solv(int n){
        int sum=0;
        for(int i=1;i<=10;i++){
            sum += n*i;
        }
        return sum;
    }
};
int main(){
    Solution sl;
    cout<<sl.solv(10);
}