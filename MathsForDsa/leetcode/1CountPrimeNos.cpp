#include<iostream>
using namespace std;
class Prime{
    public:
    bool number(int num){
        if(num<=1){
            return 0;
        }
        for(int i=2;i<num;i++){
            if(num%i ==0)
            return 0;
        }
        return 1;
    }
    public:
    int count=0;
        int check(int range){
            for(int i=2;i<range;i++){
                if(number(i)){
                    count++;
                }
            }
            return count++;
        }
};
int main(){
    int range;
    cout<<"Enter the range:";
    cin>>range;
    Prime pr;
    cout<<pr.check(range);
}