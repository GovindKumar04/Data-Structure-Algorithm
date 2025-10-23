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
    // ~Node()
    // {
    //     if (this->next != NULL)
    //     {
    //         delete next;
    //         this->next= NULL;
    //     }
    // }
};

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
    
}
void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&tail, Node *&head, int position, int data)
{
    // for inserting at first position
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }
    int cnt = 1;
    Node *temp = head;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
    }
    Node *newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteAtPostion(Node *&head, int p)
{
    
    if (p == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    else
    {
        Node *temp = head;
        int cnt = 1;
        while (cnt < p - 1)
        {
            temp = temp->next;
            cnt++;
        }
        Node* a= temp->next;
        temp->next = temp->next->next;
        delete a;
    }
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(5);
    Node *head = node1;
    Node *tail = node1;

    print(head);

    insertAtHead(head, 7);
    insertAtHead(head, 9);
    insertAtHead(head, 10);
    print(head);

    insertAtTail(tail, 6);
    insertAtTail(tail, 90);
    insertAtTail(tail, 60);
    insertAtTail(tail, 9);
    print(head);
    insertAtPosition(tail, head, 4, 8);
    insertAtPosition(tail, head, 4, 11);
    insertAtPosition(tail, head, 11, 4);
    insertAtPosition(tail, head, 12, 70);

    print(head);
    cout << "head " << head->data << endl;
    cout << "temp " << tail->data << endl;
    deleteAtPostion(head, 4);
    deleteAtPostion(head, 10);
    deleteAtPostion(head, 1);
    print(head);

    return 0;
}