#include<iostream>
#include<vector>
using namespace std;
class Binary{
    public:
    int search(vector<vector<int>>& arr,int key){
        int row=arr.size();
        int col=arr[0].size();
        int start=0;
        int end=row*col-1;
        int mid=start+(end-start)/2;
        while(start<=end){
            int element=arr[mid/col][mid%col];
            if(element==key){
                return 1;
            }
            else if(element<key){
                start=mid+1;
            }
            else if(element>key){
                end=mid-1;
            }
            mid=start+(mid-start)/2;
        }
        return -1;
    }
};
int main(){
    vector<vector<int>>arr={{1,3,4},{5,8,9},{13,56,77}};
    Binary bi;
    int key;
    cout<<"Enter the element:";
    cin>>key;
    cout<<bi.search(arr,key);
}
//Time Complexity:O(logmn)