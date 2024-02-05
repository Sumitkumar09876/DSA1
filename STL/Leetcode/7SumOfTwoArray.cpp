#include<iostream>
#include<vector>
using namespace std;
class sum{
    public:
    int add(vector<int>arr1,vector<int>arr2){
        int sum = 0;
        for(int i=arr1.size()-1,j=arr2.size()-1;i,j<=0;i--,j--){
            sum += arr1[i] + arr2[j];
            int temp=sum/10;
            sum=arr1[i+1]+temp;
        }
        return sum;
    }
};
int main(){
    vector<int>arr1={1,2,3};
    vector<int>arr2={9,9};
}