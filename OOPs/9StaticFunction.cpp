#include<iostream>
using namespace std;
class sta{
    public:
    static const int num=99;
    public:
    static int su(){
        cout<<num;
    }
};
int main(){
    sta st;
    st.su();
}