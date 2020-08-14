#include<iostream>
using namespace std;

class arrQueue {
private:
    int a[100];
    int size = sizeof(a,a[0]);
    int front = -1;
    int rear = -1;
public:
    bool isEmpty(){
        if(front == -1 && rear == -1){
            return true;
        }
        else{
            return false;
        }
    }
    void enqueue(int x){
        if(isFull()){
            return;
        }
        else if(isEmpty()){
            front = 0;
            rear = 0;
            a[rear] = x;
        }
        else{
            rear = rear + 1;
        }
        a[rear] = x;
    }

    void dequeue(){
        if(isEmpty()){
            return;
        }
        else if (front == rear){
            front = -1;
            rear = -1;
        }
        else{
            front = front+1;
        }
    }
    void print(){
        cout<<front<<rear<<endl;
        for(int i = front;i<=rear;i++){
            cout<<a[i]<<" ";
        }
    }
    bool isFull(){
        if(rear == size - 1){
            return  true;
        }
        else{
            return false;
        }
    }

};
int main() {

    arrQueue q;
    q.enqueue(12);
    q.enqueue(403);
    q.enqueue(431);
    q.enqueue(132);
    q.dequeue();
    q.dequeue();
    q.print();
}
