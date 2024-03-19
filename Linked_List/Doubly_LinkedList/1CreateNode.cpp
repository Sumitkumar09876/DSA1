#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
void print(Node* head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int lenghtofnode(Node* head){
    int len;
    Node* temp=head;
    while(temp != NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
int main(){
    Node* node1=new Node(11);
    Node* head=node1;
    print(head);
    cout<<lenghtofnode(head);
}