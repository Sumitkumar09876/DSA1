#include<iostream>
#include<vector>
#include<string>
using namespace std;

class comp {
public:
    string compress(vector<char>& v) {
        int i = 0;
        string result;
        int size = v.size();
        while (i < size) {
            int j = i + 1;
            while (j < size && v[i] == v[j]) {
                j++;
            }
            result += v[i];
            int count = j - i;
            if (count > 1) {
                result += ',' + to_string(count);
            }
            if (j < size) {
                result += ',';
            }
            i = j;
        }
        return result;
    }
};

int main() {
    vector<char>v = {'a','a','b','b','c','c','c'};
    comp c;
    cout << c.compress(v);
    return 0;
} 