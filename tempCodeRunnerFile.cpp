#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> solv(vector<int> arr, int k) {
        vector<string> store;
        // Generate all combinations
        for (int i = 0; i < k; ++i) {
            string combination = "";
            for (int j = i; j < k; ++j) {
                combination += to_string(arr[j]);
                store.push_back(combination);
            }
        }
        return store;
    }
};

int main() {
    // Input: 3 0 1 2 3
    int k = 4; // Size of the array
    vector<int> arr = {0, 1, 2, 3}; // Array elements

    Solution sol;
    vector<string> combinations = sol.solv(arr, k);

    // Print all combinations
    for (const string& comb : combinations) {
        cout << comb << ",";
    }
    cout << endl;

    return 0;
}