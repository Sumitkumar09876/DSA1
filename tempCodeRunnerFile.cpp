#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solv(string str) {
        int vowels = 0;
        int consonants = 0;
        int spaces = 0;
        
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                vowels++;
            } else if (str[i] == ' ') {
                spaces++;
            } else if (isalpha(str[i])) {
                consonants++;
            }
        }
        
        cout << "Vowels: " << vowels << endl;
        cout << "Consonants: " << consonants << endl;
        cout << "White spaces: " << spaces << endl;
    }
};

int main() {
    Solution solution;
    string str = "Take u forward is Awesome";
    solution.solv(str);
    return 0;
}