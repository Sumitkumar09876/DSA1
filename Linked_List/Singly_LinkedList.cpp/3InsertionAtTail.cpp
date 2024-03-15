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
void InsertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next=head;
    head=temp;
}
void InsertAtTail(Node* tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void print(Node* head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* node1=new Node(12);
    Node* head=node1;
    print(head);
    InsertAtHead(head,11);
    print(head);
    Node* tail=node1;
    InsertAtTail(tail,10);
    print(head);
}