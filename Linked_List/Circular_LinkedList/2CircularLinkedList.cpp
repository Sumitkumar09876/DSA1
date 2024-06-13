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
        int val=data;
        if(this->data != NULL){
            delete next;
            this->next=NULL; 
        }
        cout<<"Value deleted:"<<val<<endl;
    }
};
void InsertInNode(Node* &tail,int data,int element){
    if(tail==NULL){
        Node*temp=new Node(data);
        tail=temp;
        temp->next=temp;
    }
    else{
        Node* curr=tail;
        while(curr->data != element){
            curr=curr->next;
        }
        Node* temp=new Node(data);
        
        temp->next=curr->next;
        curr->next=temp;
    }
}
void DeleteNode(Node* &tail,int element){
    if(tail==NULL){
        cout<<"List is empty";
    }
    Node* curr=tail;
    Node* prev=NULL;
    while(curr->data != element){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next; 
    if(curr=prev){
        tail = NULL;
    }
    if(tail==curr){
        tail=prev;
    }
    curr->next=NULL;
    delete curr;
}
void print(Node* &tail){
    Node*temp=tail;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    } while (temp != tail);
    cout<<endl;

}
int main(){
    Node*tail=NULL;
    InsertInNode(tail,10,3);
    print(tail);
    InsertInNode(tail,11,10);
    print(tail);
    InsertInNode(tail,12,10);
    print(tail);
    DeleteNode(tail,12);
    print(tail);
}