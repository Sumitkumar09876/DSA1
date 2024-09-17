#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPrime(int num) {
        if (num <= 1) {
            return false;
        }
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }

    void solv(int n, int m) {
        for (int i = n; i <= m; i++) {
            if (isPrime(i)) {
                int sum = 0;
                int num = i;
                while (num > 0) {
                    sum += num % 10;
                    num /= 10;
                }
                if (isPrime(sum)) {
                    cout << i << " ";
                }
            }
        }
        cout << endl;
    }
};

int main() {
    Solution sl;
    sl.solv(10, 30); // Example test case
    return 0;
}