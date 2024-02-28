#include<iostream>
using namespace std;
int main(){
    int arr[10]={0,2,3,4,5,6,};
    cout<<"Address of arr[0]:"<<arr<<endl;
    cout<<"Address of arr[0]:"<<&arr[0]<<endl;
    cout<<"Value at first index:"<<*arr<<endl;
    cout<<"Value at second index:"<<*arr+1<<endl;
}