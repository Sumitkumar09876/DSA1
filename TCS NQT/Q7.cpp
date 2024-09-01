/*calculate the sum of N terms of Fibonacci series
Note; fib(0)=1
      fib(1)=1
Input  n=5
Output  7
*/
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int fib(int n) {
        if(n <= 1) {
            return n;
        }
        else {
            return fib(n-1) + fib(n-2);
        }
    }
};

int main(){
    Solution sl;
    int sum=0;
    for(int i = 0; i < 6; i++){
        cout << sl.fib(i) << " ";
        sum +=sl.fib(i);
    }
    cout<<endl;
    cout<<sum;
}