/*
Sum of the Numbers in a String
Given a string, calculate the sum of numbers in a string(multiple consecutive digits are considered one number)
Ex 1:
Input: string = "123xyz"
Output: 123

Ex2:
Input: String ="1xyz23"
Output: 24
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solv(string str) {
        int sum = 0;
        int currentnum = 0;
        for (char c : str) {
            if (isdigit(c)) {
                currentnum = currentnum * 10 + (c - '0');
            }
            else {
                sum += currentnum;
                currentnum = 0;
            }
        }
        sum += currentnum;
        return sum;
    }
};
int main(){
    Solution sl;
    string str="1xyz23";
    cout<<sl.solv(str);
}