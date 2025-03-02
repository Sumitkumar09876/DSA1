#include<iostream>
using namespace std;
class Solution{
    public:
    int Binary(int arr[],int num, int size){
        int left=0;
        int right=size-1;
        while (left<=right)
        {
            int mid=(left+right)/2;
            if(arr[mid]==num){
                return mid;
            }
            if(arr[mid]<num){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return -1;
    }
};
int main(){
    int arr[]={2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size=(sizeof(arr)/sizeof(arr[0]));
    Solution sl;
    if(sl.Binary(arr,56,size)==-1){
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"Found";
    }
}
