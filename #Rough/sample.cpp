#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int subarrayBitwiseORs(vector<int> A)
    {
        unordered_set<int> res, cur, cur2;
        for (int i : A)
        {
            cur2 = {i};
            for (int j : cur)
                cur2.insert(i | j);
            for (int j : cur = cur2)
                res.insert(j);
        }
        return res.size();
    }
};
int main()
{
    Solution sl;
    vector<int> arr = {1, 1, 2};
    cout << sl.subarrayBitwiseORs(arr);
}