#include<iostream>
using namespace std;
class Solution{
    public:
    int fib(int num){
        if(num<=1){
            return num;
        }
        return fib(num-1)+fib(num-2);
    }
};
int main(){
    Solution sl;
    cout<<sl.fib(10);
}