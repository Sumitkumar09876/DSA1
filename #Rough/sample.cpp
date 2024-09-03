#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int>Solution(){
        vector<int>arr;
        string input;
        stringstream ss(input);
        char c;
        for(ss>>c){
            if(c!=',' || c!='[' || c!=']'){
                int num;
                ss>>num;
                arr.push_back(num);
            }

        }
        return arr;
    }
}
int main()
{
    Solution sl;
    vector<int> arr = {1, 1, 2};
    cout << sl.subarrayBitwiseORs(arr);
}