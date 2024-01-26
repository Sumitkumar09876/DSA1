#include<iostream>
using namespace std;
class Sorting{
    public:
    int j,i;
    int selection(int arr[],int size){
        for(i=0;i<size;i++){
            for(j=i+1;j<size;j++){
                if(arr[i]>arr[j]){
                    //swap(arr[i],arr[j]);  swapping using swap function
                    int swap=arr[i];
                    arr[i]=arr[j];
                    arr[j]=swap;
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
    int arr[5]={34,125,5,67,89};
    int size=sizeof(arr)/sizeof(int);
    Sorting sort;
    sort.selection(arr,size);
    return 0;
}
//Space Complexity:O(1)
//Time Complexity:O(n^2)
//Best Case:Already sorted array,O(n^2),{1,2,3,4,5}
//Worst Case:Decreasing Order,O(n^2),{5,4,3,2,1}