/*3 May S1 Q1
The organization has data warehouse there will be given a three digit number check whether number is divisible by 9 or not ?

Input 236           Output Number 236 is not divisible by 9
Input 162           Output Number 162 is divisible by 9
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void Solv(int num){
        if(num%9==0){
            cout<<"Number "<<num<<" is divisible by 9";
        }else{
            cout<<"Number "<<num<<" is not divisible by 9";
        }
    }
};
int main(){
    Solution sl;
    sl.Solv(162);
    cout<<endl;
    sl.Solv(236);
}