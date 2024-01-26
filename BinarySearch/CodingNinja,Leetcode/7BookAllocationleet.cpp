#include<iostream>
using namespace std;
class bookallocation{
    public:
    bool isPossible(int arr[],int size,int stu,int mid){
        int stucount=1;
        int pagesum=0;
        for(int i=0;i<size;i++){
            if(pagesum+arr[i]<mid){
                pagesum +=arr[i];
            }
            else{
                stucount++;
                if(pagesum>mid || arr[i]>mid){
                    return false;
                }
                pagesum +=arr[i];
            }
        }
        return true;
    }
int binary(int arr[],int size,int stu){
    int start=0;
    int sum=0;
    for(int i=0;i<size;i++){
        sum +=arr[i];
    }
    int end=sum;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(isPossible(arr,size,stu,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;

}
};
int main(){
    int arr[4]={10,20,30,40};
    int size=sizeof(arr)/sizeof(int);
    int stu=2;
    bookallocation bk;
    cout<<bk.binary(arr,size,stu);

}