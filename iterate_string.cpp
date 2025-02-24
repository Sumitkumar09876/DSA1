#include <iostream>
using namespace std;

long long simpleFactorial(int n) {
    if (n < 0) return -1;  // Error case
    if (n <= 1) return 1;  // Base case
    return n * simpleFactorial(n - 1);
}

int main() {
    cout << "1. Simple Recursion: " << simpleFactorial(10) << endl;
}