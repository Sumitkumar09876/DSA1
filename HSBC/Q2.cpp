/*Question 2 : Password Hacker
Elliot made a KeyLogger for his friend Romero, so that he can see the passwords of his friend. Keylogger is a software that can tell you the buttons pressed in the keyboard without the consent of the user, and hence unethical. Elliot made it to hack Romero’s passwords. The one problem is, Romero writes the passwords in lowercase characters only, and the keylogger only takes the values of the keys. Like, for a it takes 1, for b 2, and for z 26. For a given number Elliot produces all combinations of passwords in a dictionary and starts a dictionary based password attack. For a given number, print all the possible passwords in a lexicographic order.

Input Format:
One line, denoting the value given by the keylogger

Output Format:
All possible combinations of keyloggers in new lines are lexicographically ordered.

Constraints:
2<=Number of digit in input<=1000

Sample Input:
1234

Sample Output:
abcd
axd
Mcd

Explanation:
For 12, you can take 1,2 that is ab, or you can take l.
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<string>solv(vector<int>&arr){
        vector<string>store;
        for(int i=0;i<arr.size();i++){
            string num=arr[i]+'a';
            store.push_back(num);
        }
        return store;
    }
};
int main() {
    vector<int> arr = {1, 2, 3, 4};
    Solution sl;
    vector<string> result = sl.solv(arr);
    for (const auto& it : result) {
        cout << it << endl;
    }
    return 0;
}