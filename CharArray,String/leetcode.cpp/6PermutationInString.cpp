#include <iostream>
#include <vector>
#include <string> // Include the <string> header file

using namespace std; // Add the 'using' directive to use the std namespace

bool checkInclusion(string s1, string s2) {
    // Check if s1 is a permutation of any substring of s2
    int n1 = s1.size();
    int n2 = s2.size();
    
    if (n1 > n2) {
        return false;
    }
    
    vector<int> count1(26, 0);
    vector<int> count2(26, 0);
    
    // Initialize the count arrays for s1 and the first window of s2
    for (int i = 0; i < n1; i++) {
        count1[s1[i] - 'a']++;
        count2[s2[i] - 'a']++;
    }
    
    // Slide the window through s2
    for (int i = n1; i < n2; i++) {
        // Check if the current window is a permutation of s1
        if (count1 == count2) {
            return true;
        }
        
        // Update the count array for the next window
        count2[s2[i] - 'a']++;
        count2[s2[i - n1] - 'a']--;
    }
    
    // Check the last window
    if (count1 == count2) {
        return true;
    }
    
    return false;
}

int main() {
    string s1, s2;
    cout << "Enter string s1: ";
    cin >> s1;
    cout << "Enter string s2: ";
    cin >> s2;
    
    bool result = checkInclusion(s1, s2);
    if (result) {
        cout << "s1 is a permutation of a substring of s2" << endl;
    } else {
        cout << "s1 is not a permutation of any substring of s2" << endl;
    }
    
    return 0;
}
