#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node* prev;
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->data!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Element deleted!"<<value;
    }
};
void InsertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void InsertionAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void InsertAtMid(Node* &head,Node* &tail,int position,int d){
    if(position==1){
        InsertAtHead(head,d);
        return;
    }
    else{
        int cnt=1;
        Node*temp=head;
        while(cnt<position-1){
            temp=temp->next;
            cnt++;
        }
        Node* insertinto=new Node(d);
        insertinto->next=temp->next;
        insertinto->prev=temp;
        temp->next=insertinto;
    }
}
void Deletion(Node* &head,Node* &tail,int position){
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
        curr->prev=NULL;
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
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
Node* node1=new Node(10);
Node* head=node1;
print(head);
InsertAtHead(head,9);
print(head);
Node* tail=node1;
InsertionAtTail(tail,11);
print(head);
InsertAtMid(head,tail,3,34);
print(head);
Deletion(head,tail,4);
cout<<endl;
print(head);
cout<<"head:"<<head->data<<endl;
cout<<"Tail:"<<tail->data;
}