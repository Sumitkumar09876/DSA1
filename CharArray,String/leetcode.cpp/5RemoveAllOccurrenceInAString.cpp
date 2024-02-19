#include<iostream>
using namespace std;
class remov{
    public:
    string rem(string str,string part){
        while(str.length()!=0 && str.find(part)<str.length()){
            str.erase(str.find(part),str.length());
        }

        return str;
    }
};
int main(){
    string str="daabcbaabcbc";
    string part="abc";
    remov re;
    cout<<re.rem(str,part);
}