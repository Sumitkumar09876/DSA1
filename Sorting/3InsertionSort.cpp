#include<iostream>
using namespace std;
class Sorting{
    public:
    int i;
    int insertion(int arr[],int size){
        for(i=1;i<size;i++){
            int temp=arr[i];
            int j=i-1;
            while(j<size-1){
                if(arr[j]>temp){
                    arr[j+1]=arr[j];
                }
                else{
                    break;
                }
            j--;}
        arr[j+1]=temp;
        }
        for(i=0;i<size;i++){
            cout<<" "<<arr[i];
        }
        return 0;
    } 
};
int main(){
    int arr[5]={34,23,56,67,21};
    int size=sizeof(arr)/sizeof(int);
    Sorting sort;
    sort.insertion(arr,size);
}