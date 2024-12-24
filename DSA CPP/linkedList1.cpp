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

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void insertAtMiddle(Node *&head, int position, int d)
{
    if (position == 1)
    {
        insertAtHead(head, d);
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
        insertAtTail(temp, d);
        return;
    }
    Node *node = new Node(d);
    node->next = temp->next;
    temp->next = node;
}
void printData(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void deleteNode(int position, Node *&head)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
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
        curr->next = NULL;
        delete curr;
    }
}

int main()
{

    Node *node1 = new Node(15);
    Node *head = node1;
    Node *tail = node1;
    printData(head);
    cout << endl;
    insertAtHead(head, 10);
    printData(head);
    insertAtTail(tail, 25);
    cout << endl;
    printData(head);
    cout << endl;
    insertAtMiddle(head, 2, 12);
    printData(head);
    insertAtMiddle(head, 5, 35);
    cout << endl;
    printData(head);
    deleteNode(1, head);
    cout << endl;
    printData(head);
    return 0;
}