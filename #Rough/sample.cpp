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
};
void insertAtHead(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
void insertAtTail(Node* &tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}
void insertAtMiddle(Node* &head,Node* &tail,int data,int position){
    if(position==1){
        return insertAtHead(head,data);
    }
    else{
        int cnt=1;
        Node* curr=head;
        while(cnt<position-1){
            curr=curr->next;
            cnt++;
        }
        Node* temp=new Node(data);
        temp->next=curr->next;
        curr->next=temp;
    }
}
void reverse(Node* &head){
    Node* curr=head;
    Node* prev=NULL;
    while (curr!=NULL)
    {
        Node* forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    head=prev;
    cout<<head->data<<endl;
    
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
    Node* newNode=new Node(10);
    Node* head=newNode;
    print(head);
    insertAtHead(head,9);
    print(head);
    Node* tail=newNode;
    insertAtTail(tail,11);
    print(head);
    insertAtMiddle(head,tail,34,2);
    print(head);
    cout<<"Reverse Linked List:"<<endl;
    reverse(head);
    print(head);
}