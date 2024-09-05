#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;

class Solution {
public:
    int maxProductSubarray(vector<int>& nums) {
        if (nums.empty()) return 0;

        int maxProduct = 1;
        int result = INT_MIN;
        int currentProduct = 1;
        int negativeCount = 0;
        int firstNegativeIndex = -1;
        int lastNegativeIndex = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                // Reset calculations when encountering zero
                maxProduct = max(maxProduct, result);
                currentProduct = 1;
                negativeCount = 0;
                firstNegativeIndex = -1;
                lastNegativeIndex = -1;
                continue;
            }

            currentProduct *= nums[i];

            if (nums[i] < 0) {
                negativeCount++;
                if (firstNegativeIndex == -1) firstNegativeIndex = i;
                lastNegativeIndex = i;
            }

            if (negativeCount % 2 == 0) {
                // If even number of negatives, consider the entire product
                result = max(result, currentProduct);
            } else {
                // If odd number of negatives, consider products excluding first or last negative
                if (i > firstNegativeIndex) {
                    result = max(result, currentProduct / nums[firstNegativeIndex]);
                }
                if (i > lastNegativeIndex) {
                    result = max(result, currentProduct / nums[lastNegativeIndex]);
                }
            }

            // Consider single positive numbers
            if (nums[i] > 0) {
                result = max(result, nums[i]);
            }
        }

        maxProduct = max(maxProduct, result);
        return maxProduct;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, -4, -5, 0};
    Solution sl;
    cout << "Maximum product subarray: " << sl.maxProductSubarray(nums) << endl;
    return 0;
}