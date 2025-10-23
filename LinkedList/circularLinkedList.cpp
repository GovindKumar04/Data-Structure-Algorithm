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
};

void insertNode(Node *&tail, int element, int data)
{
    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        Node *temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node *tail, int node)
{

    if (tail->data == node)
    {
        Node *curr = tail->next;
        Node *prev = NULL;
        while (curr->data != node)
        {
            prev = curr;
            curr = curr->next;
        }
        cout <<curr->data << " " << prev->data<<endl;
        prev->next =curr->next;
        curr->next=NULL;
        tail=curr->next;
        delete curr;
        // return;
    }
    else
    {
        Node *curr = tail;
        Node *prev = NULL;
        while (curr->data != node)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
void print(Node *tail)
{
    Node *temp = tail;
    int count = 0;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (temp != tail);
    cout << endl;
}
int main()
{
    Node *tail = NULL;
    insertNode(tail, 3, 1);
    print(tail);

    insertNode(tail, 1, 2);
    print(tail);

    insertNode(tail, 2, 4);
    print(tail);

    insertNode(tail, 2, 3);
    print(tail);

    insertNode(tail, 4, 0);
    print(tail);

    cout << "Tail :- " << tail->data << endl;

    deleteNode(tail, 2);
    print(tail);
    cout<<tail;
    return 0;
}