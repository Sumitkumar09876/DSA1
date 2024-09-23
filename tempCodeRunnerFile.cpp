#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<pair<string, int>> parseInput(string str) {
        vector<pair<string, int>> candidates;
        stringstream ss(str);
        int score;
        string name;
        
        while (ss >> score >> name) {
            candidates.push_back({name, score});
        }
        
        return candidates;
    }

    void printTopKCandidates(vector<pair<string, int>>& candidates, int k) {
        // Sort candidates based on scores in descending order
        sort(candidates.begin(), candidates.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
            return b.second < a.second;
        });
        
        // Print top k candidates
        for (int i = 0; i < k && i < candidates.size(); ++i) {
            cout << candidates[i].first << ":" << candidates[i].second << endl;
        }
    }
};

int main() {
    string str = "90 john 85 Bob 100 Alice 110 Aditya";
    int k = 3;
    
    Solution sl;
    vector<pair<string, int>> candidates = sl.parseInput(str);
    sl.printTopKCandidates(candidates, k);
    
    return 0;
}