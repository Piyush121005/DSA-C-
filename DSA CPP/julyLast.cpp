#include <iostream>
#include <map>
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

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
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
bool iscircular(Node *head)
{
    if (head == NULL)
    {
        return false;
    }
    Node *temp = head;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if (temp == head)
    {
        return true;
    }
    if (temp == NULL)
    {
        return false;
    }
}
bool detectLoop(Node *head)
{
    if (head == NULL)
    {
        return false;
    }
    map<Node *, bool> visited;
    Node *temp = head;
    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            cout << "Cycle on element: " << temp->data << endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
}
bool floydDection(Node *head)
{
    if (head == NULL)
    {
        return false;
    }
    Node *temp1 = head;
    Node *temp2 = head;
    do
    {
        temp2 = temp2->next;
        if (temp2 == NULL)
        {
            return false;
        }
        temp2 = temp2->next;
        temp1 = temp1->next;
    } while (temp1 != temp2);
    cout << "Cycle on element: " << temp1->data << endl;
    return true;
}
Node *floydDetectionNode(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *temp1 = head;
    Node *temp2 = head;
    do
    {
        temp2 = temp2->next;
        if (temp2 == NULL)
        {
            return NULL;
        }
        temp2 = temp2->next;
        temp1 = temp1->next;
    } while (temp1 != temp2);
    return temp1;
}
Node *getStatringNode(Node *head)
{
    Node *intersection = floydDetectionNode(head);
    if (intersection == NULL)
    {
        return NULL;
    }
    Node *temp = head;
    while (temp != intersection)
    {
        temp = temp->next;
        intersection = intersection->next;
    }
    return temp;
}
void removeLoop(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    Node *startofLoop = getStatringNode(head);
    Node *temp = startofLoop;
    while (temp->next != startofLoop)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}
int main()
{
    Node *node1 = new Node(75);
    Node *head = node1;
    Node *tail = node1;
    insertAtHead(head, 25);
    insertAtHead(head, 15);
    insertAtHead(head, 5);
    insertAtMiddle(head, 4, 10);
    tail->next = head->next;
    cout << "Head is: " << head->data << endl;
    cout << "Tail is: " << tail->data << endl;
    // printData(head);
    cout << floydDection(head) << endl;
    cout << detectLoop(head) << endl;
    removeLoop(head);
    printData(head);
    cout << floydDection(head) << endl;
    cout << detectLoop(head) << endl;
    return 0;
}