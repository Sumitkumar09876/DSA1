#include<iostream>
using namespace std;
class Sorting{
    public:
    int i,j;
    int bubblesort(int arr[],int size){
        for(i=0;i<size;i++){
            for(j=0;j<size-i-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }
        for(i=0;i<size;i++){
            cout<<" "<<arr[i];
        }
        return 0;
    }

};
int main(){
    int arr[5]={45,2,54,33,5};
    int size=sizeof(arr)/sizeof(int);
    Sorting sort;
    sort.bubblesort(arr,size);

}