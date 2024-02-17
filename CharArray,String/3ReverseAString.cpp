#include<iostream>
using namespace std;
class reverse{
    public:
    int count(char name[]){
        int count=0;
        for(int i=0;name[i] != '\0';i++){
            count++;
        }
        return count;
    }
    void rev(char name[]){
        int num=count(name);
        int s=0;
        int e=num-1;
        while(s<=e){
            swap(name[s++],name[e--]);
        }
    }
};
int main(){
    char name[20];
    cout<<"Enter the name:";
    cin>>name;
    reverse r;
    r.rev(name);
    cout<<"reverse a string:"<<name;

}