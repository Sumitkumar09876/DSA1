#include<iostream>
using namespace std;
class Stack{
    public:
    int* arr;
    int top;
    int size;
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int element){
    if(size-top>1){
      top++;
      arr[top]=element;  
    }
    else{
        cout<<"Stack Overflow:"<<endl;
    }
    }
    void pop(){
        if(top>=0){
            top--;
            cout<<"Element is removed "<<endl;
        }
        else{
            cout<<"Stack is underflow:"<<endl;
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is emplty"<<endl;
        }
    }
    void isEmpty(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
        }
        else{
            cout<<"Stack is not empty"<<endl;
        }
    }
    void print(){
        int i=0;
        if(top>=0){
            while(i<=top){
            cout<<arr[i]<<" ";
            i++;
        }
        cout<<endl;
        }
        else{
            cout<<"Stack is empty"<<endl;
        }
        
    }
};
int main(){
    Stack st(5);
    st.push(12);
    st.push(13);
    st.push(14);
    st.pop();
    cout<<"Elements in Stack:"<<endl;
    st.print();
}
