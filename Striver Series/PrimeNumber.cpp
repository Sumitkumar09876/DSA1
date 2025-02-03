#include<iostream>
using namespace std;
class Solution{
    public:
    bool isPrime(int n){
        if(n<=1){
            return false;
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int solv(int n){
        for(int i=2;i<=n;i++){
            if(isPrime(i)){
                cout<<i<<endl;
            }
        }
        return 0;
    }
};
int main(){
    Solution sl;
    sl.solv(10);
}
