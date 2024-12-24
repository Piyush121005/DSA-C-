#include <iostream>
using namespace std;

// Singly Linked List
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};
//sol 1
/* 
class Solution{
    public:
    struct Node* reverse(Node* head){
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    void insertAtTail(struct Node* &head,struct Node* &tail,int val){
        Node* temp = new Node(val);
        if(head==NULL){
            head = temp;
            tail = temp;
            return;
        }else{
            tail->next = temp;
            tail = temp;
        }
    }
    struct Node* add(struct Node* first,struct Node* second){
        int carry = 0;
        Node* anshead = NULL;
        Node* anstail = NULL;
        while(first!=NULL && second!=NULL){
                int sum = first->data + second->data + carry;
                int digit = sum%10;
                //Step 3 => creating node ans add to answer linked list
                insertAtTail(anshead,anstail,digit);
                carry = sum/10;
                first = first->next;
                second = second->next;
        }
        while(first!=NULL){
            int sum = carry+first->data;
                int digit = sum%10;
                insertAtTail(anshead,anstail,digit);
                carry = sum/10;
                first = first->next;
        }
                while(second!=NULL){
            int sum = carry+second->data;
                int digit = sum%10;
                insertAtTail(anshead,anstail,digit);
                carry = sum/10;
                second = second->next;
        }
        while(carry!=0){
            int sum = carry;
                            int digit = sum%10;
                insertAtTail(anshead,anstail,digit);
                carry = sum/10;
        }
        return anshead;
    }
    struct Node* addTwoList(struct Node* first,struct Node* second){
        //Step 1 => Reverse
        first = reverse(first);
        second = reverse(second);
        //Step 2 => Add 2 ll
        Node* ans = add(first,second);
        ans = reverse(ans);
        return ans;
    }
};
*/
//Sol2
class Solution{
    public:
    struct Node* reverse(Node* head){
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    void insertAtTail(struct Node* &head,struct Node* &tail,int val){
        Node* temp = new Node(val);
        if(head==NULL){
            head = temp;
            tail = temp;
            return;
        }else{
            tail->next = temp;
            tail = temp;
        }
    }
    struct Node* add(struct Node* first,struct Node* second){
        int carry = 0;
        Node* anshead = NULL;
        Node* anstail = NULL;
        while(first!=NULL || second!=NULL|| carry!=0){
            int val1 = 0;
            if(first!=NULL){
                val1 = first->data;
            }
            int val2 = 0;
            if(second!=NULL){
                val2 = second->data;
            }
            int sum = carry+val1+val2;
            int digit = sum%10;
                            insertAtTail(anshead,anstail,digit);
                carry = sum/10;
                if(first!=NULL){
                first = first->next;
                }
                if(second!=NULL){
                second = second->next;
                }
                return anshead;
        }
    }
        struct Node* addTwoList(struct Node* first,struct Node* second){
        //Step 1 => Reverse
        first = reverse(first);
        second = reverse(second);
        //Step 2 => Add 2 ll
        Node* ans = add(first,second);
        ans = reverse(ans);
        return ans;
    }
};
int main(){
    return 0;
}