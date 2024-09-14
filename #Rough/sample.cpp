#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxEfficiency(vector<int>& arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end());
    
    // Case 1: Product of three largest numbers
    int case1 = arr[n-1] * arr[n-2] * arr[n-3];
    
    // Case 2: Product of two smallest (possibly negative) and the largest
    int case2 = arr[0] * arr[1] * arr[n-1];
    
    return max(case1, case2);
}

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int result = maxEfficiency(arr);
    cout << result << endl;
    
    return 0;
}
