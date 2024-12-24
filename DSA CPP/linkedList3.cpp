#include <iostream>
using namespace std;

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
            next = NULL;
        }
    }
};
class DNode
{
public:
    int data;
    DNode *next = NULL;
    DNode *prev = NULL;
    DNode(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    ~DNode()
    {
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};


/*
void printData(Node *tail,int size)
{
    Node *temp = tail;
    for(int i=0;i<size;i++)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int getLength(Node *tail,int size)
{
    Node *temp = tail;
    int len = 0;
    for(int i=0;i<size;i++)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
*/
void insertNode(Node *&tail, int ele, int d)
{
    // Assuming that element is present in the list.
    // Empty List
    Node *node = new Node(d);
    if (tail == NULL)
    {
        tail = node;
        tail->next = tail;
    }
    else
    {
        // Non empty List
        Node *curr = tail;
        while (curr->data != ele)
        {
            curr = curr->next;
        }
        node->next = curr->next;
        curr->next = node;
    }
}
void printData(Node *tail)
{
    Node *temp = tail;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp!= tail);
    cout << endl;
}
int getLength(Node *tail)
{
    Node *temp = tail;
    int len = 0;
    if (tail == NULL)
    {
        return len;
    }
    do
    {
        len++;
        temp = temp->next;
    } while (temp != tail);
    return len;
}
void deleteNode(Node *&tail, int value)
{
    if (tail == NULL)
    {
        return;
    }
    else
    {
        Node *prev = tail;
        Node *curr = prev->next;
        while(curr->data!=value){
            prev = curr;
            curr = curr->next;
        }
        if(curr==prev){
            tail = NULL;
        }
        prev->next = curr->next;
        if(tail==curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}
int main()
{

    Node *tail = NULL;
    insertNode(tail, 25, 40);
    printData(tail);
    cout << getLength(tail) << endl;
    insertNode(tail, 40, 25);
    printData(tail);
    cout << getLength(tail) << endl;
    insertNode(tail, 25, 20);
    printData(tail);
    cout << getLength(tail) << endl;
    deleteNode(tail,40);
        printData(tail);
    cout << getLength(tail) << endl;
    return 0;
}