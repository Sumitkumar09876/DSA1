//Intersection of two arrays
#include<iostream>
using namespace std;
int i,j;
void intersect(int arr1[],int arr2[],int size){
    cout<<"Array intersection:";
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }
}
int main(){
    int arr1[5]={1,4,2,6,3};
    int arr2[5]={2,3,0,8,9};
    cout<<"Elements in arr1:";
    for(i=0;i<5;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    cout<<"Elements in arr2:";
    for(i=0;i<5;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    intersect(arr1,arr2,5);
}