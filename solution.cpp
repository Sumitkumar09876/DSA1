#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int solv(vector<int>arr, int size, int k) {
        int sum = 0, i = 0, j = i + 1;
        int cnt = 0;
        
        while(j < size) {  // Added boundary check
            sum = arr[i] + arr[j];
            
            if(sum < k) {
                j++;
            }
            else if(sum > k) {
                i++;
                if(i == j) j++;  // Ensure j stays ahead of i
            }
            else if(sum == k) {
                cout << "Found pair: " << arr[i] << " + " << arr[j] << endl;
                cnt++;
                i++;
                j++;
            }
            
            if(i >= size-1) break;  // Added exit condition
        }
        return cnt;
    }
};

int main() {
    vector<int>arr = {2,3,5,1,9};
    int size = arr.size();
    Solution sl;
    cout << "Number of pairs: " << sl.solv(arr,size,10);
    return 0;
}
