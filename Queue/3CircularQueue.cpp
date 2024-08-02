#include<iostream>
using namespace std;
class Queue{
    int* arr;
    int front;
    int rear;
    int size;
    public:
    Queue(){
        size=100;
        arr=new int[size];
        front = 0;
        rear = 0;
    }
    bool Enqueue(int data){
        if(front == 0 && rear == size-1){
            cout<<"Queue is full"<<endl;
            return false;
        }else if(front == -1){
            rear=front=0;
        }else if(rear== size-1 && front != 0){
            rear=0;
        }else{
            rear++;
        }
        arr[rear]=data;
        return true;

    }

    int Dequeue(){
        if(front==-1){
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        int ans=arr[front];
        front==-1;
        if(front== rear){  //single element
            front=rear=-1;
        }else if(front==size-1){  //circular nature
            front=0;
        }else{
            front++;
        }
    }

};
int main(){
    Queue qu;
    qu.Enqueue(12);
    qu.Enqueue(13);
    qu.Enqueue(14);
    cout<<"Element is Dequeue:"<<qu.Dequeue();
}