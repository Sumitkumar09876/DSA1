#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node*next;
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
    Node(int data1,Node*next1){
        data=data1;
        next=next1;
    }
};
Node*ATL(vector<int>arr){
    Node*head=new Node(arr[0]);
    Node*mover=head;
    for(int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
Node*RemoveHead(Node*head){
    if(head==NULL)return NULL;
    Node*temp=head;
    head=head->next;
    delete temp;
    return head;
}
Node*RemoveTail(Node*head){
    if(head==NULL || head->next==NULL)return NULL;
    Node*temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}
Node*RemoveMid(Node*head,int k){
    if(k==1){
        /*Node*temp=head;
        head=head->next;
        delete temp;
        return head;*/
        return RemoveHead(head);
    }else{
    int cnt=0;
    Node*temp=head;
    Node*prev=NULL;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
    }
}
int main(){
    vector<int>arr={34,23,54,58};
    Node*head=ATL(arr);
    Node*temp=head;
    while (temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    /*cout<<endl;
    temp=RemoveHead(head);
    while (temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    temp=RemoveTail(head);
    while (temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }*/
    cout<<endl;
    temp=RemoveMid(head,1);
    while (temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
