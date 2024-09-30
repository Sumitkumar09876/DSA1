#include<bits/stdc++.h>

using namespace std;
string ss;
vector < string > v;

void fun(int i, string s) {
  //cout<< i<< s<< endl;
  if (i == ss.length()) {
    v.push_back(s);
    return;
  }
  if (i > ss.length()) return;
  if (ss[i] == '0') return;
  char c = 'a' + (ss[i] - '1');
  fun(i + 1, s + c);
  if (i != s.length() - 1)
    if (ss[i] < '3' && ss[i + 1] < '7') {
      int a = (ss[i] - '1' + 1), b = (ss[i + 1] - '0');
      c = ('a' + (10 * a + b - 1)); //cout<< a<< b<< endl;
      fun(i + 2, s + c);
    }
}

int main() {
  cin >> ss;
  fun(0, "");
  sort(v.begin(), v.end());
  for (auto i: v) cout << i << endl;
}