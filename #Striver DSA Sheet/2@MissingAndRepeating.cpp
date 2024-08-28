#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> findTwoElements(vector<int>& arr, int n) {
        vector<int> ans(2);
        int i;
        for(i = 0; i < n; i++) {
            if(arr[abs(arr[i]) - 1] > 0) {
                arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
            } else {
                ans[0] = abs(arr[i]);
            }
        }
        for(i = 0; i < n; i++) {
            if(arr[i] > 0) {
                ans[1] = i + 1;
            }
        }
        return ans;
    }
};
int main() {
    vector<int> arr = {1, 3, 3};
    int n = arr.size() - 1;
    Solution sol;
    vector<int> result = sol.findTwoElements(arr, n);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}