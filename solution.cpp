#include <iostream>

using namespace std;

int main() {
    int n, firstTerm = 0, secondTerm = 1, nextTerm;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; i++) {
        cout << firstTerm << " "; // Print the current term
        nextTerm = firstTerm + secondTerm; // Calculate the next term
        firstTerm = secondTerm; // Update firstTerm to be the previous secondTerm
        secondTerm = nextTerm; // Update secondTerm to be the newly calculated nextTerm
    }
    cout << endl;

    return 0;
}