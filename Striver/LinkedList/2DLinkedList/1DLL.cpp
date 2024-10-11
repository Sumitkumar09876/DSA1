#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node*next;
    Node*back;
    public:
    Node(int data1,Node*next1,Node*back1){
        data=data1;
        next=next1;
        back=back1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};
Node*ATL(vector<int>arr){
    Node*head=new Node(arr[0]);
    Node*prev=head;
    for(int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i]);
        prev->next=temp;
        temp->back=prev;
        prev=temp;
    }
    return head;
}
Node*Removehead(Node*head){
    if(head==NULL || head->next==NULL)return NULL;
    Node*temp=head;
    head=head->next;
    head->back=NULL;
    delete temp;
    return head;
}
Node*Removetail(Node*head){
    Node*temp=head;
    while (temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
    return head;
}
Node*RemoveAtIndex(Node*head,int pos){
    if(pos==1){
        return Removehead(head);
    }
    int cnt=0;
    Node*temp=head;
    Node*prev=NULL;
    while (temp!=NULL)
    {
        cnt++;
        if(cnt==pos){
            prev->next=temp->next;
            temp->next->back=temp->back;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;   
}
Node*InsertAtHead(Node*head,int val){
    if(head==NULL)return NULL;
    Node*temp=head;
    Node*Newnode=new Node(val,head,temp->back);
}
Node*InsertAtTail(Node*head,int val){

}
void print(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    vector<int>arr={12,23,34,45,56,67};
    Node*head=ATL(arr);
    Node*temp1=head;
    print(temp1);

    cout<<endl;
    head=Removehead(head);
    temp1=head;
    print(temp1);

    cout<<endl;
    temp1=Removetail(head);
    print(temp1);

    cout<<endl;
    temp1=RemoveAtIndex(head,4);
    print(temp1);
}
 