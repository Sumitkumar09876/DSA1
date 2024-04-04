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
void InsertionAtHead(Node*&head,int data){
    Node*temp=new Node(data);
    temp->next=head;
    head=temp;
}
void InsertionAtTail(Node*&tail,int data){
    Node*temp=new Node(data);
    tail->next=temp;
    tail=temp;
}

void ReverseAtK(Node*&head,int k,Node*&tail){
    Node*curr=head;
    Node*temp=head;
    int cnt=1;
    Node*prev=NULL;
    Node*forward=NULL;
    tail=head;
    while (temp != NULL)
    {
        if(cnt<=k){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            cnt++;
            if(cnt>k){
                cnt=cnt+k;
                k=k+k;
            }
        }
        temp=temp->next;
    }
    head=prev;
    
}
void print(Node*&head){
    Node*temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
Node* node1=new Node(10);
Node*head=node1;
print(head);
InsertionAtHead(head,9);
print(head);
Node*tail=node1;
InsertionAtTail(tail,11);
print(head);
InsertionAtHead(head,8);
print(head);
InsertionAtTail(tail,12);
print(head);
InsertionAtHead(head,7);
print(head);
InsertionAtTail(tail,13);
print(head);
cout<<"After Reverse:"<<endl;
ReverseAtK(head,2,tail);
print(head);
}