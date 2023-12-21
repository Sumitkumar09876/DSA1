#include<iostream>
using namespace std;
class stack{
    public:
    int size;
    int top;
    int *arr;
    
    stack(int size){
        this->size=size;
        top=-1;
        arr=new int[size];
    }
    void push(int element){
       if(size-top>0){
        top++;
        arr[top]=element;
       } 
       else{
        cout<<"Stack Overflow:";
       }
    }
    void pop(){
        if(top>=0){
            top--;
            cout<<"Element is removed";
        }
        else{
            cout<<"Stack is Empty:";
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is Empty";
            return -1;
        }
    }
    bool IsEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    void display(){
            for(int i=0;i<=top;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
    }
};
int main(){
    stack st(5);
    /*st.push(12);
    st.push(23);
    st.push(36);

     st.display();

    cout<<st.peek()<<endl;

    st.pop();
    cout<<endl;
    st.display();*/
    int choice,item;
    do {
        cout << "\nMenu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Peek\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the item to push: ";
                cin >> item;
                st.push(item);
                break;

            case 2:
                st.pop();
                break;

            case 3:
                st.display();
                break;

            case 4:
                cout<<st.peek();
                break;

            case 5:
                cout << "Exiting the program." << endl;
                break;

            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 5);

}