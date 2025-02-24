#include<iostream>
#include<string>
using namespace std;
bool String(string str){
    int left=0;
    int right=str.length()-1;
    while(left<right){
        if(str[left]!=str[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int Number(int num){
    int original=num;
    int reverse=0;
    while(num>0){
        int digit=num%10;
        reverse=reverse*10+digit;
        num=num/10;
    }
    if(original == reverse){
        return true;
    }
}
int main(){
    string str = "racecar";
    if(String(str)){
        cout<<"Palindrome"<<endl;
    }
    if(Number(12321)){
        cout<<"Palindrome";
    }
}