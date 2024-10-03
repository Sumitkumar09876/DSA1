/*
9 May 2024 S2 Q1
Remove duplicate from the string array.
Input:
Watermelon apple orange banana orange lemon apple

Output:
Asc:
apple banana lemon orange watermelon
Desc:
watermelon orange lemon banana apple
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string solv(string str) {
        vector<string> words;
        stringstream ss(str);
        string word;
        while (ss >> word) {
            words.push_back(word);
        }
        
        set<string> uniqueWords;
        for (const auto& w : words) {
            uniqueWords.insert(w);
        }
        
        string result;
        for (const auto& w : uniqueWords) {
            result += w + " ";
        }
        
        if (!result.empty()) {
            result.pop_back();  // Remove trailing space
        }
        
        return result;
    }
};
int main(){
    string str={"Watermelon apple orange banana orange lemon apple"};
    Solution sl;
    cout<<sl.solv(str);
}