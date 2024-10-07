#include<iostream>
#include<vector>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node*next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* ATL(vector<int>&arr){
    Node*head=new Node(arr[0]);
    Node*mover=head;
    for(int i=1;i<arr.size();i++ ){
        Node*temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
Node*RemoveHead(Node*head){
    if(head==NULL)return head;
    Node*temp=head;
    head=head->next;
    delete temp;
    return head;
}
Node*RemoveTail(Node*head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node*temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}
Node*RemoveMid(Node*head,int k){
    if(k==1){
        //Node*temp=head;
        //head=head->next;
        //delete temp;
        //return head;
        return RemoveHead(head);
    }else{
        int cnt=0;
        Node*temp=head;
        Node*prev=NULL;
        while(temp!=NULL){
            cnt++;
            if(cnt==k){
                prev->next=prev->next->next;
                delete temp;
                break;
            }
            prev=temp;
            temp=temp->next;
        }
        return head;
    }
}
Node*InsertAtHead(Node*head,int value){
    Node*temp=new Node(value,head);
    temp->next=head;
    head=temp;
    return head;
}
Node*InsertAtTail(Node*head,int value){
    if(head==NULL){
        return InsertAtHead(head,value);
    }
    Node*Newnode=new Node(value);
    Node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=Newnode;
    return head;
}
Node*InsertAtMid(Node*head,int value,int pos){
    if(head==NULL){
        return new Node(value);
    }
    if (pos==1)
    {
        return InsertAtHead(head,value);
    }
    int cnt=0;
    Node*temp=head;
    while (temp!=NULL)
    {
        cnt++;
        if(cnt==pos-1){
            Node*Newnode=new Node(value,temp->next);
            temp->next=Newnode;
            break;

        }
        temp=temp->next;
    }
    return head;
}
Node*InsertAtMidValue(Node*head,int value,int element){
    if(head==NULL){
        return new Node(value);
    }
    if (element==head->data)
    {
        return InsertAtHead(head,value);
    }
    Node*temp=head;
    while (temp->next!=NULL)
    {
        if(element==temp->next->data){
            Node*Newnode=new Node(value,temp->next);
            temp->next=Newnode;
            break;

        }
        temp=temp->next;
    }
    return head;
}
int main(){
    vector<int>arr={41,2,33,4};
    Node*head=ATL(arr);
    cout<<head->data<<endl;
    Node*temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    //Node*newhead=RemoveTail(head);
    //temp=newhead;
    //while(temp){
    //    cout<<temp->data<<" ";
    //    temp=temp->next;
    //}
    //cout<<endl;
    //temp=RemoveMid(head,1);
    //while (temp)
    //{
       // cout<<temp->data<<" ";
       // temp=temp->next;
    //}
    head=InsertAtHead(head,5);
    cout<<head->data<<endl;
    temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    Node*temp1=InsertAtTail(head,15);

    while(temp1){
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }
    cout<<endl;
    Node*temp2=InsertAtMid(head,99,3);
    while (temp2)
    {
        cout<<temp2->data<<" ";
        temp2=temp2->next;
    }
    cout<<endl;
    Node*temp3=InsertAtMidValue(head,44,33);
    while(temp3){
        cout<<temp3->data<<" ";
        temp3=temp3->next;
    }
    
    
}
