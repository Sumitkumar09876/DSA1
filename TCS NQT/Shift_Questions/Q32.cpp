// 6 Sept 2024 Q1 S1
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int solv(int value){
        int sum=0;
        for(int i=1;i<value;i++){
            if(value%i==0){
                sum+=i;
            }
        }
        if(sum==value){
            return 1;
        }
        return 0;
    }
};
int main(){
    int num;
    cout<<"enter the number:";
    cin>>num;
    Solution sl;
    cout<<sl.solv(num);
}