#include<iostream>
using namespace std;
class cls{
    public:
    static int num;
};
int cls::num=78;
int main(){
    cout<<cls::num;
}