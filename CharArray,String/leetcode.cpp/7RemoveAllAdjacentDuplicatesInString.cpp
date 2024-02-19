#include<iostream>
using namespace std;
class adj{
    public:
    string dupli(string str){
        string temp=" ";
        for(char ch:str){
            if(!temp.empty() && temp.back()==ch){
                temp.pop_back();
            }
            else
            {
                temp.push_back(ch);
            }
            
        }
        return temp;
    }
};
int main(){
    string str="abbacaa";
    adj a;
    cout<<a.dupli(str);

}