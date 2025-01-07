/*
QI. A company is transmitting data to another server. The data is in the form of numbers. To secure the
data during transmission, they plan to obtain a security key that will be sent along with the data. The
security key is identified as the count of the unique repeating digits in the data. Write an algorithm to
find the security key for the data.
The input consists of an integer-, representing the data to be transmitted.
Print an integer representing the security key for the given data
input: 12345
output: 0
input: 121342
output:
2
 */
#include<iostream>
#include<map>
using namespace std;
class Solution{
    public:
    int solv(int arr[],int size){
        map<int,int>cnt;
        for(int i=0;i<size;i++){
            cnt[arr[i]]++;
        }
        int count=0;
        for(auto& it:cnt){
            if(it.second>1){
                count++;
            }
        }
        return count;
    }
};
int main(){
    int arr[]={9,9,9,9,9,9,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    Solution sl;
    cout<<sl.solv(arr,size);
}