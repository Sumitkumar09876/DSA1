#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;
int main(){
    //string str="[3,6,3,7,6,3,7]";
    cout<<"Enter the string:";
    string str;
    getline(cin,str);
    vector<int>nums;
    string trimedstr=str.substr(1,str.size()-2);//removing brackets;
    stringstream ss(trimedstr);//split the string by comma
    string item;
    while(getline(ss,item,',')){
        nums.push_back(stoi(item));//convert the substring into integers
    }
    for(int i=0;i<nums.size();i++){
        cout<<nums[i];
    }
}