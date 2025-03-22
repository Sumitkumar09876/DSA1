#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    // Fixed return type and logic
    void solv(vector<int>& arr, int size, int k) {
        vector<int> temp(size);  // Initialize with correct size
        
        for (int i = 0; i < size; i++) {
            if (i < size - k) {
                // First part: shift right by k
                temp[i + k] = arr[i];
            } else {
                // Second part: wrap around
                temp[i + k - size] = arr[i];
            }
        }
        
        // Print the result
        for (int i = 0; i < size; i++) {
            cout << temp[i] << " ";
        }
        
        // If you want to update original array
        // arr = temp;
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int size = arr.size();
    Solution sl;
    sl.solv(arr, size, 2);
    
    return 0;  // Added return statement
}