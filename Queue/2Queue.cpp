#include<iostream>
using namespace std;
class Queue{
    int* arr;
    int rear;
    int front;
    int size;
    public:
    Queue(){
        size=100;
        arr = new int[size];
        rear= 0;
        front=0;
    }

    bool isEmpty(){
    if(rear==front){
        return true;
    }
    else{
        return false;
    }
    }

    void Enqueue(int data){
        if(rear==size){
            cout<<"Queue is full"<<endl;
        }else{
            arr[rear]=data;
            rear++;

        }
    }

    int Dequeue(){
        if(front == rear){
            cout<<"Queue is Empty:"<<endl;
            return -1;
        }else{
            int ans=arr[front];
            arr[front]=-1;
            front++;
            if(front== rear){
                rear=0;
                front=0;
            }
            return ans;
        }
    }
    int qfront(){
        if(front==rear){
            return -1;
        }else{
            return arr[front];
        }
    }
};
int main(){
    Queue qu;
    qu.Enqueue(10);
    qu.Enqueue(12);
    cout<<"Dequeued:"<<qu.Dequeue()<<endl;
    cout<<"Front element:"<<qu.qfront();
    return 0;
}
