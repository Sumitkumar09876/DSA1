/*
26 April Shift 1 Q2
62. Unique Paths
Medium

There is a robot on an m x n grid. The robot is initially located at the top-left corner (i.e., grid[0][0]). The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). The robot can only move either down or right at any point in time.
Given the two integers m and n, return the number of possible unique paths that the robot can take to reach the bottom-right corner.
The test cases are generated so that the answer will be less than or equal to 2 * 109.

Example 1:

Input: m = 3, n = 7
Output: 28

Example 2:

Input: m = 3, n = 2
Output: 3
Explanation: From the top-left corner, there are a total of 3 ways to reach the bottom-right corner:
1. Right -> Down -> Down
2. Down -> Down -> Right
3. Down -> Right -> Down
 

Constraints:

1 <= m, n <= 100
*/
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int uniquePaths(int m, int n) {
        // Create a 2D array for memoization and initialize with -1
        vector<vector<int>> memo(m, vector<int>(n, -1));
        return findPaths(0, 0, m, n, memo);
    }

private:
    int findPaths(int i, int j, int m, int n, vector<vector<int>>& memo) {
        if (i >= m || j >= n) {
            return 0;
        }
        if (i == m - 1 && j == n - 1) {
            return 1;
        }
        if (memo[i][j] != -1) {
            return memo[i][j];
        }
        memo[i][j] = findPaths(i + 1, j, m, n, memo) + findPaths(i, j + 1, m, n, memo);
        return memo[i][j];
    }
};

int main() {
    Solution solution;

    int m = 3;
    int n = 7;
    cout << "Unique paths for grid (3, 7): " << solution.uniquePaths(m, n) << endl;
    m = 3;
    n = 2;
    cout << "Unique paths for grid (3, 2): " << solution.uniquePaths(m, n) << endl;
    m = 23;
    n = 12;
    cout << "Unique paths for grid (23, 12): " << solution.uniquePaths(m, n) << endl;

    return 0;
}