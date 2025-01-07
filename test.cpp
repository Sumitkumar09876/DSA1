#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int solv(vector<int>arr, int size, int k) {
        int i = 0, j = 0;
        int sum = 0;
        int maxLen = 0;
        
        while (j < size) {
            sum += arr[j];
            
            while (i <= j && sum > k) {
                sum -= arr[i];
                i++;
            }
            
            if (sum == k) {
                maxLen = max(maxLen, j - i + 1);
            }
            
            j++;
        }
        return maxLen;
    }
};

int main() {
    vector<int>arr = {2,3,5,1,9};
    int size = arr.size();
    Solution sl;
    cout << sl.solv(arr,size,10);
    return 0;
}