#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>arr;
    arr.push_back(56);
    arr.push_back(12);
    arr.push_back(564);
    cout<<"find 12:"<<binary_search(arr.begin(),arr.end(),12)<<endl;
    cout<<"Upper bound:"<<upper_bound(arr.begin(),arr.end(),12)-arr.begin()<<endl;
    cout<<"lower bound:"<<lower_bound(arr.begin(),arr.end(),12)-arr.begin()<<endl;
}