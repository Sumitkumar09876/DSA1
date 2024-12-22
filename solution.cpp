#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> solv(vector<int>& arr, int size, int k) {
        // Handle cases where k > size
        k = k % size;
        
        vector<int> store(size);
        
        // Copy last k elements to start
        for(int i = 0; i < k; i++) {
            store[i] = arr[size - k + i];
        }
        
        // Copy remaining elements
        for(int i = k; i < size; i++) {
            store[i] = arr[i - k];
        }
        
        return store;
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k;
    int size = arr.size();
    
    cout << "Enter the rotation value: ";
    cin >> k;
    
    Solution sl;
    vector<int> result = sl.solv(arr, size, k);
    
    cout << "Rotated array: ";
    for(int num : result) {
        cout << num << " ";
    }
    
    return 0;
}
