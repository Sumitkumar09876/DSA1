#include<iostream>
using namespace std;
class Solution{
    public:
    bool solv(int num){
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
    int prime(int num){
        for(int i=2;i<=num;i++){
            if(solv(i)){
                cout<<i<<" ";
            }
        }
        return 0;
    }
};
int main(){
    Solution sl;
    sl.prime(10);
}