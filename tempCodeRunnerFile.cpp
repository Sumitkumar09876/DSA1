#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

string decodeString(string S1) {
    // Step 1: Count the repeating characters
    unordered_map<char, int> char_count;
    for (char c : S1) {
        char_count[c]++;
    }

    // Step 2: Find the maximum repeating character
    char max_char = S1[0];
    int max_count = char_count[max_char];
    for (auto& pair : char_count) {
        if (pair.second > max_count) {
            max_char = pair.first;
            max_count = pair.second;
        }
    }

    // Step 3: Reverse the string
    string reversed_S1 = S1;
    reverse(reversed_S1.begin(), reversed_S1.end());

    // Step 4: Format the output
    string result = reversed_S1 + to_string(max_count) + max_char;

    // Step 5: Return the result
    return result;
}

int main() {
    // INPUT [uncomment & modify if required]
    string S1;
    cin >> S1;

    // Solution [uncomment & modify if required]
    cout << decodeString(S1);

    return 0;
}