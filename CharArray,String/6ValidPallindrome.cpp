#include<iostream>
using namespace std;
class valid{
    public:
    string palli(string str){
        string temp;
        for(int i=0;i<str.length();i++){
            if(str[i]>=0 && str[i]<=9 || str[i]>='A' && str[i]<'Z' || str[i]>='a' && str[i]<='z'){
                if(str[i]>='A' && str[i]<='Z'){
                    temp.push_back(str[i]-'A'+'a');
                }
                else{
                    temp.push_back(str[i]);
                }
            }
        }
        return temp;
    }
};
int main(){
    string str="A man, a plan, a canal: Panama";
    valid v;
    cout<<v.palli(str);
}