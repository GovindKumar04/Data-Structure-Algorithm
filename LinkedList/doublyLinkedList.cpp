#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

void insertAtHead(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insertAtTail(Node *&tail, int data)
{
    Node *node = new Node(data);
    tail->next = node;
    node->prev = tail;
    tail = node;
}

void addNode(Node *&head, int pos, int data)
{
   // Your code here
   
   Node* temp=head;
   Node* forward=head;
   Node* newnode= new Node(data);
   for(int i=0; i<pos; i++){
       
       temp=temp->next;
       forward=temp->next;
   }
  newnode->prev=temp;
  newnode->next=forward;
  temp->next=newnode;
  forward->prev=newnode;
//   temp->next->next->prev=newnode;
}
// void insertAtPosition(Node *&head, Node *&tail, int data, int pos)
// {
//     if (pos == 1)
//     {
//         insertAtHead(head, data);
//     }
//     else
//     {
//         Node *temp = head;
//         int cnt = 1;
//         while (cnt < pos - 1)
//         {
//             temp = temp->next;
//             cnt++;
//         }

//         Node *node = new Node(data);
//         if (temp->next == nullptr)
//         {
//             insertAtTail(tail, data);
//             return;
//         }
//         node->next = temp->next;
//         temp->next->prev = node;
//         node->prev = temp;
//         temp->next = node;
//     }
// }
void deleteNode(Node* &tail,Node *&head, int pos)
{
    Node *curr = head;
    if(pos==1){
        head=head->next;
        head->prev=nullptr;
        delete curr;
        return;
    }
    
    Node *prev = nullptr;
    int cnt = 1;
    while (cnt < pos)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }
    if(curr->next==nullptr){
        prev->next=nullptr;
        curr->prev=nullptr;
        tail=prev;
        cout<<"deleted "<<curr->data<<endl;
        delete curr;
        return;
    }
    // cout << "Current " << curr->data << endl;
    // cout << "prev " << prev->data << endl;
    // cout << (prev->next)->data << " " << curr->next->data << " " << (curr->next->prev)->data << " " << (prev)->data << endl;
    prev->next = curr->next;
    curr->next->prev = prev;

    curr->next = nullptr;
    curr->prev = nullptr;
    delete curr;
}
void print(Node *&tail)
{
    Node *temp = tail;
    while (temp->prev != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << temp->data << endl;
}
void printFromHead(Node *&head)
{
    Node *temp = head;
    while (temp->next != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << endl;
}
int main()
{
    Node *node = new Node(6);
    Node *head = node;
    Node *tail = node;

    insertAtHead(head, 8);
    insertAtHead(head, 7);
    insertAtHead(head, 5);
    insertAtHead(head, 4);
    insertAtTail(tail, 54);
    insertAtTail(tail, 0);
    print(tail);
    // insertAtPosition(head, tail, 4, 3);
    // insertAtPosition(head, tail, 7, 9);
    // cout<<tail->data;
    addNode(head,1,4);
    printFromHead(head);
    deleteNode(tail,head, 8);
    print(tail);
    printFromHead(head);
    deleteNode(tail,head,8);
    print(tail);
    printFromHead(head);
    return 0;
}