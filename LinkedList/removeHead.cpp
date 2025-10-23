#include <iostream>

using namespace std;

class Node{
    public: 
    int data;
    Node * next;
    Node(int data){
        this->data=data;
        this->next=NULL;

    }
};
void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
    
}
void removeHead(Node * &head){
    Node* curr=head;
    head=head->next;
    curr->next=NULL;
    delete curr;
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
int main(){
    Node* node= new Node(4);
    Node* head=node;
    insertAtHead(head,5);
    insertAtHead(head,6);
    insertAtHead(head,7);
    print(head);
    removeHead(head);
    print(head);
    return 0;
}