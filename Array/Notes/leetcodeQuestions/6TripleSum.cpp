#include<iostream>
using namespace std;
int i,j,k;
void triplesum(int arr[],int size){
    cout<<"Triplet are:"<<endl;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            for(k=0;k<size;k++){
                int sum=i+j+k;
                if(sum==10){
                    if(i<j && j<k){
                        cout<<i<<" "<<j<<" "<<k<<endl;
                    }
                }
            }
        }
    }
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(int);
    cout<<"Elements in array:"<<endl;
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    triplesum(arr,size);
}