#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int store=data;
        if(this->data != NULL){
            delete next;
            this->next=NULL;
        }
    }
};
void InsertAtHead(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
void InsertAtTail(Node* &tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}
void InsertAtMiddle(Node* &head,Node* &tail,int data,int position){
    if(position==1){
        return InsertAtHead(head,data);
    }
    else{
        int count=1;
        Node*temp=head;
        while(count!=position-1){
            temp=temp->next;
            count++;
        }
        if(temp==NULL){
            return InsertAtTail(tail,data);
        }
        Node* insertinto=new Node(data);
        insertinto->next=temp->next;
        temp->next=insertinto;
    }
}
void DeleteNode(Node* &head,Node* &tail,int position){
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        int cnt=1;
        Node* curr=head;
        Node* prev=NULL;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        if(prev->next==NULL){
            tail=prev;
        }
    }
}
void print(Node* &head){
    Node* temp=head;
    while (temp !=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
Node* newnode=new Node(10);
Node* head=newnode;
print(head);
InsertAtHead(head,9);
print(head);
Node* tail=newnode;
InsertAtTail(tail,11);
print(head);
InsertAtMiddle(head,tail,34,2);
print(head);
DeleteNode(head,tail,1);
print(head);
cout<<head->data<<endl;
cout<<tail->data;
}