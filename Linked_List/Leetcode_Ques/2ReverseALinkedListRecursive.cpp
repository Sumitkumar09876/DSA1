#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node*next;
        Node(int data){
            this->data=data;
            this->next=NULL;
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
void recursive(Node* &head,Node* curr,Node*prev){
    if(curr == NULL){
        head=prev;
        return;
    }
    Node*forward=curr->next;
    recursive(head,forward,curr);
    curr->next=prev; 
}
Node* reverse(Node*&head){
    Node*curr=head;
    Node*prev=NULL;
    recursive(head,curr,prev);
    return head;
    
}
void print(Node* &head){
    Node* temp=head;
    if(head==NULL || head->next==NULL){
        cout<<head->data;
    }
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node *node1= new Node(10);
    Node* head=node1;
    InsertAtHead(head,9);
    print(head);
    Node* tail=node1;
    InsertAtTail(tail,11);
    print(head);
    InsertAtTail(tail,12);
    print(head);
    InsertAtTail(tail,13);
    cout<<"Original Linked List:"<<endl;
    print(head);
    reverse(head);
    cout<<"Linked List Reversed:"<<endl;
    print(head);
    cout<<"Head:"<<head->data<<endl;
    cout<<"Tail:"<<tail->data<<endl;
}