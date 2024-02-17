//Not Case Sensitive means capital 'A' and small 'a' are same
#include<iostream>
using namespace std;
class pall{
    public:
    int count(char name1[]){
        int count=0;
        for(int i=0;name1[i] != '\0';i++){
            count++;
        }
        return count;
    }
 void lowercase(char name1[]) {
        int length = count(name1);
        for(int i = 0; i < length; i++) {
            if(name1[i] >= 'A' && name1[i] <= 'Z') {
                name1[i] = name1[i] - 'A' + 'a';
            }
        }
    }

    int palli(char name1[]) {
        lowercase(name1);
        int length = count(name1);
        for(int i = 0; i < length / 2; i++) {
            if(name1[i] != name1[length - i - 1]) {
                return 0;
            }
        }
        return 1;
    }
};
int main(){
    char name1[20];
    cout<<"Enter the name:"<<endl;
    cin>>name1;
    pall c;
    if(c.palli(name1)==1){
        cout<<"Pallindrome";
    }
    else{
        cout<<"not a pallindrome";
    }
}