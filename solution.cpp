#include<iostream>
#include<string>
#include<sstream>
using namespace std;
class Solution{
    public:
    string solv(string str){
        istringstream iss(str);
        string item;
        while (iss>>item)
        {
            cout<<item<<endl;
        }
        
    }
};
int main(){
    string str={"Hello world this is a test"};
    Solution sl;
    sl.solv(str);
}