//Pair elements whose sum is 5;
#include<iostream>
using namespace std;
int i,j;
void pairsum(int arr[],int size){
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            int sum=i+j;
            if(sum==5){
                if(i<j){
                cout<<i<<","<<j<<endl;
                break;
                }
            }
        }
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    cout<<"Elements in array";
    for(i=0;i<size;i++){
        cout<<arr[i];
    }
    cout<<endl;
    pairsum(arr,size);
}