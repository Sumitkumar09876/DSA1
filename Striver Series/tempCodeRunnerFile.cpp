#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int solv(int arr[], int size) {
        unordered_map<int, int> counts;
        for (int i = 0; i < size; ++i) {
            counts[arr[i]]++;
        }

        int repeating_count = 0;
        for (auto const& [key, val] : counts) {
            if (val > 1) {
                repeating_count++;
            }
        }
        return repeating_count;
    }
};

int main() {
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 9, 9, 8, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    Solution sl;
    cout << sl.solv(arr, size) << endl;
    return 0;
}