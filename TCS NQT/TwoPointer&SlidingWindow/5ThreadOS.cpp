#include<iostream>
#include<thread>
#include<unistd.h>
using namespace std;
void Task1(){
    for(int i=0;i<10;i++){
        sleep(1);
        printf("Task1: %d\n", i);
        fflush(stdout);
    }
}
void Task2(){
    for (int i = 0; i < 10; i++)
    {
        sleep(1);
        printf("Task2: %d\n", i);
        fflush(stdout);
    }
    
}
int main(){
    thread t1(Task1);
    thread t2(Task2);

    t1.join();
    t2.join();
}