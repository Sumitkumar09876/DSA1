#include<iostream>
#include<string>
#include<sstream>
#include<cctype>
#include<algorithm>

using namespace std;
class Solution{
    public:
    int solv(string str){
        istringstream iss(str);
        string word;
        int wordcount=0;
        while (iss>>word)
        {
            if(any_of(word.begin(),word.end(),::isalnum)){
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