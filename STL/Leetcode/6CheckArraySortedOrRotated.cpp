//Check array sorted or rotated
#include<iostream>
#include<vector>
using namespace std;
class check{
    public:
    int sotrot(vector<int>arr){
        int n=arr.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i-1]>arr[i]){
                count++;
            }
        }
        if(arr[n-1]<arr[0]){
            count++;
        }
        return count<=1;
    }
};
int main(){
    vector<int>arr={3,4,5,1,2};
    check ch;
    cout<<ch.sotrot(arr);
}