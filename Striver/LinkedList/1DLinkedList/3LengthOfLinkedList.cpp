#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node*next;
    public:
    Node(int data1,Node*next1){
        data=data;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* ATL(vector<int>arr){
    Node*head=new Node(arr[0]);
    Node*mover=head;
    for(int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int Length(Node* head){
    Node*temp=head;
    int cnt=0;
    while(temp){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
int main(){
    vector<int>arr={34,23,54,323,32,45};
    Node*head=ATL(arr);
    Node*temp=head;
    while (temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    cout<<Length(head);
    
}