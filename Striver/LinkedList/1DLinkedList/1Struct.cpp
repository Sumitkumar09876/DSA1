//Struct
#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1){
         data =data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
int main(){
    int arr[]={1,2,3,4};
    Node* y=new Node(arr[0]);
    cout<<y->data;
    cout<<&y;
}