#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->data != NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Element deleted:"<<value;
    }
};
void InsertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void InsertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void InsertAtMiddle(Node* &head,Node* &tail,int position,int d){
    if(position==1){
        InsertAtHead(head,d);
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp == NULL){
        InsertAtTail(tail,d);
        return;
    }
    Node* nodeinsertto= new Node(d);
    nodeinsertto->next=temp->next;
    temp->next=nodeinsertto;

}
void Deletion(Node* &head,Node* &tail,int position){
    if(position == 1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else {
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while (cnt< position)
        {
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
    while (temp != NULL)    
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
}
int main(){
    Node* node1=new Node(12);
    Node* head=node1;
    print(head);
    Node* tail=node1;
    InsertAtHead(head,11);
    print(head);
    InsertAtMiddle(head,tail,2,13);
    print(head);
    InsertAtTail(tail,14);
    print(head);
    Deletion(head,tail,4);
    cout<<endl;
    print(head);
    cout<<"Head:"<<head->data<<endl;
    cout<<"Tail:"<<tail->data;

}