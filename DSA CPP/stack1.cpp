#include<iostream>
#include<stack>
using namespace std; 

//using array
class Stack{

//properties
    public:
    int *arr;
    int top;
    int size;
//functions
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element){
        if(size-top>1){
            top++;
            arr[top] = element;
        }else{
            cout<<"Stack Overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            cout<<"Popped element is: "<<arr[top];
            top--;
        }else{
            cout<<"Stack Underflow!"<<endl;
        }
    }
    int peak(){
        if(top>=0&&top<size){
            return arr[top];
        }else{
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }else{
            return false;
        }
    }
    bool isFull(){
        if(top==size-1){
            return true;
        }else{
            return false;
        }
    }
};
//using linked list
class LStack{

    int data;
    LStack* next;
    int size;
    LStack(){
        this->next = NULL;
    }
    void push(LStack* head,int element){
    LStack *temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    LStack* node;
    node->data = element;
    temp->next = node;
    node->next = NULL;
    }
    void pop(LStack* head){
        LStack* temp = head->next;
        LStack* tail = head;
        while(temp->next!=NULL){
            temp = temp->next;
            tail = tail->next;
        }
        cout<<"Popped element is:"<<temp->data;
        tail->next = NULL;
        delete(temp);
    }

};
int main(){ 

    
 
return 0;
}