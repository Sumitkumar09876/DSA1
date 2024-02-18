#include<iostream>
using namespace std;
class replace{
    public:
    string Zero(string str){
        string temp=" ";
        for(int i=0;i<str.length();i++){
            if(str[i]==' '){
                temp.push_back('@');
                temp.push_back('4');
                temp.push_back('0');
            }
            else{
                temp.push_back(str[i]);
            }
        }
        return temp;
    }
};
int main(){
    string str="what is your name";
    replace re;
    cout<<re.Zero(str)<<endl;
}