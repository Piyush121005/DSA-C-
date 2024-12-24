#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
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

void printData(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int getLength(Node *head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
void insertAtHead(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
void insertAtTail(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
}
void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    if (position == 1)
    {
        insertAtHead(head, tail, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(head, tail, d);
        return;
    }
    Node *node = new Node(d);
    node->next = temp->next;
    temp->next = node;
    node->prev = temp;
}
void deleteNode(Node *&head, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->prev = NULL;
        curr->next = NULL;
        delete curr;
    }
}
int main()
{

    Node *node1 = new Node(17);
    Node *head = node1;
    Node *tail = node1;
    printData(head);
    cout << getLength(head) << endl;
    insertAtHead(head, tail, 10);
    printData(head);
    cout << getLength(head) << endl;
    insertAtTail(tail, tail, 22);
    printData(head);
    cout << getLength(head) << endl;
    insertAtPosition(head, tail, 2, 15);
    printData(head);
    cout << getLength(head) << endl;
    insertAtPosition(head, tail, 5, 35);
    printData(head);
    cout << getLength(head) << endl;
    deleteNode(head,4);
        printData(head);
    cout << getLength(head) << endl;
    return 0;
}