#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxStudent(int n, int m, int q, vector<int> &arr, vector<int> &strength, vector<vector<int>> &transfers) {
        vector<int> result;
        unordered_map<int, set<int>> school_students;
        unordered_map<int, int> school_oddness;

        // Initialize the schools with their students and calculate initial oddness
        for (int i = 0; i < n; i++) {
            school_students[arr[i]].insert(strength[i]);
        }
        for (int i = 1; i <= m; i++) {
            if (!school_students[i].empty()) {
                school_oddness[i] = *school_students[i].begin();
            } else {
                school_oddness[i] = 0;
            }
        }

        // Process each transfer
        for (const auto &transfer : transfers) {
            int student = transfer[0] - 1;
            int new_school = transfer[1];
            int old_school = arr[student];
            int student_strength = strength[student];

            // Remove student from old school
            school_students[old_school].erase(student_strength);
            if (school_students[old_school].empty()) {
                school_oddness[old_school] = 0;
            } else {
                school_oddness[old_school] = *school_students[old_school].begin();
            }

            // Add student to new school
            school_students[new_school].insert(student_strength);
            school_oddness[new_school] = *school_students[new_school].begin();

            // Update student's school
            arr[student] = new_school;

            // Calculate the maximum oddness
            int max_oddness = 0;
            for (const auto &entry : school_oddness) {
                max_oddness = max(max_oddness, entry.second);
            }
            result.push_back(max_oddness);
        }

        return result;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> arr(n), strength(n);
        vector<vector<int>> transfers(q, vector<int>(2));
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> strength[i];
        }
        for (int i = 0; i < q; i++) {
            cin >> transfers[i][0] >> transfers[i][1];
        }
        Solution ob;
        vector<int> res = ob.maxStudent(n, m, q, arr, strength, transfers);
        for (int i = 0; i < q; i++) {
            if (i != q - 1) {
                cout << res[i] << " ";
            } else {
                cout << res[i] << endl;
            }
        }
    }
    return 0;
}