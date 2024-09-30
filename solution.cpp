#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> solve(vector<int>& arr) {
        int size = arr.size();
        
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - 1 - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    // Swap elements
                    int hold = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = hold;
                }
            }
        }
        
        return arr;
    }
};

int main() {
    vector<int> arr = {4, 13, 2, 3};
    Solution sl;
    
    vector<int> result = sl.solve(arr);
    
    for (const auto& it : result) {
        cout << it << " ";
    }
    
    cout << endl;
    
    return 0;
}