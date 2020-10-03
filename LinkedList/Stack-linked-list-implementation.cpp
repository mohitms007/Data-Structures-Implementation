#include<iostream>
using namespace std;

class linkStack{
private:
    linkStack *next;
    int data;
    linkStack *top = NULL;
public:
    void push(int x){
        linkStack* node = new linkStack();
        node->data = x;
        node->next = top;
        top = node;
    }
    void pop(){
        linkStack* node  = new linkStack();
        if(top == NULL){
            return;
        }
        node = top;
        top = top->next;
        free(node);
    }
    void print(){
        linkStack *node ;
        linkStack *link;
        node = top;

            }
        };
int main() {
    linkStack first;
    first.push(50);
    first.push(60);
    first.push(443);
    first.pop();
    first.print();
}
