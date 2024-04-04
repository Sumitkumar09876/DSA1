#include <iostream>
using namespace std;
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int cnt = 0;
        int i = s.length() - 1;
        char store, temp;
        if (s.length() < 10 ^ 4)
        {
            if (s[i] == ' ')
            {
                for (int i = s.length() - 1; i >= 0; i--)
                {
                    if (int(s[i]) >= 69 && int(s[i] <= 122))
                    {
                        store = s[i];
                        cout << store << endl;
                        temp = i;
                        break;
                    }
                }
                s[temp] = store;
                while (s[temp] != ' ')
                {
                    cout << s[temp] << endl;
                    cnt++;
                    temp--;
                }

                cnt = cnt;
            }
            else
            {
                while (s[i] != ' ')
                {
                    cnt++;
                    i--;
                }
            }
            
        }
        return cnt;
    }
};
int main()
{
    Solution s;
    cout << s.lengthOfLastWord("   fly me   to   the moon ");
}