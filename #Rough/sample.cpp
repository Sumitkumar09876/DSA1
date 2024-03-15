#include<iostream>
using namespace std;
class Sorting{
    public:
    int i,j;
    void bubblesort(int arr[],int size){ // change return type to void
        for(i=0;i<size;i++){
            for(j=0;j<size-i-1;j++){ // change loop condition to j<size-i-1
                if(arr[j]>arr[j+1]){ // change condition to arr[j]>arr[j+1]
                    swap(arr[j],arr[j+1]);
                }
            }
        }
        for(i=0;i<size;i++){
            cout<<" "<<arr[i];
        }
    }
};
int main(){
    int arr[5]={45,2,54,33,54};
    int size=sizeof(arr)/sizeof(int);
    Sorting sort;
    sort.bubblesort(arr,size);
}