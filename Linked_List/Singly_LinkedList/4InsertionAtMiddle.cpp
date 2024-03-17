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
void InsertAtHead(Node*& head,int d){
    Node* temp=new Node(d);
        temp->next=head;
        head=temp;
}
void InsertAtTail(Node*& tail,int d){ 
    Node* temp=new Node(d);
        tail->next=temp;
        tail=temp;
}
void InsertionAtMiddle(Node*& tail, Node*& head, int position, int d) {
    if (position == 1) {
        InsertAtHead(head, d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while (cnt < position - 1) {
        temp = temp->next;
        cnt++;
    }
    if (tail == NULL) {
        InsertAtTail(tail, d);
        return;
    }
    Node* nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
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
    InsertAtTail(tail,14);
    print(head);
    InsertionAtMiddle(tail,head,3,13);
    print(head);
}