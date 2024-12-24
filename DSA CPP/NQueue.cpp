#include <iostream>
using namespace std;

class kQueue{

    public:
    int n,k,freespot;
    int* front;
    int* rear;
    int* arr;
    int* next;

    kQueue(int n,int k){
        this->n = n;
        this->k = k;
        front = new int[k];
        rear = new int[k];
        arr = new int[n];
        next = new int[n];
        freespot = 0;

        for(int i=0;i<k;i++){
            front[i] = -1;
            rear[i] = -1;
        }
        for(int i=0;i<n;i++){
            next[i] = i+1;
        }
        next[n-1] = -1;
    }

    void enque(int data, int qn){
        //Overflow
        if(freespot == -1){
            cout<<"No free space present"<<endl;
            return;
        }

        //Find freespot
        int index = freespot;

        //update freespot
        freespot = next[index];

        //check if first element
        if(front[qn-1]==-1) front[qn-1] = index;
        //link new element with previous element
        else{
            next[rear[qn-1]] = index;
        }

        //update next
        next[index] = -1;

        //update rear
        rear[qn-1] = index;

        //push element
        arr[index] = data;
    }

    int deque(int qn){
       if(front[qn-1]==-1){
         cout<<"Queue Underflow"<<endl; 
         return -1;
       }

        //Find index to pop
        int index = front[qn-1];

        //Front Update
        front[qn-1] = next[index];

        //Manage next
        next[index] = freespot;

        //update freespot
        freespot = index; 
        return arr[index];
    }

};

int main(){
    kQueue q(10,3);

    q.enque(10,2);
    q.enque(15,1);
    q.enque(20,1);
    cout<<q.deque(1)<<endl;
    q.enque(20,2);

    return 0;
}