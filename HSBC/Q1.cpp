/*
Here is a weird problem in Susan’s terminal. He can not write more than two words each line, if she writes more than two, it takes only 2 words and the rest are not taken. So she needs to use enter and put the rest in a new line. For a given paragraph, how many lines are needed to be written in Susan’s terminal?

Input Format:
A string as the text to input in the terminal

Output Format:
Number of lines written.

Constraints:
Number of words <=10^7

Sample Input:
How long do you have to sit dear ?

Sample Output:
4

Explanation:
The writing will be:
How long
Do you
Have to
Sit dear ?
*/
#include<iostream>
#include<string>
#include<sstream>
#include<cctype>
#include<algorithm>
using namespace std;
class Solution{
    public:
    int solv(const string& str){
        istringstream iss(str);
        string word;
        int wordcount=0;
        while(iss>>word){
            if(any_of(word.begin(), word.end(), ::isalnum)){
                wordcount++;
            }
        }
        return (wordcount+1)/2;
    }
};
int main(){
    string str="How long do you have to sit dear ?";
    Solution sl;
    cout<<sl.solv(str);
}