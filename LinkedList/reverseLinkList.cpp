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

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
    
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

void reverse(Node* &head){
    Node* curr=head;
    Node* prev=NULL;
    Node* forward=NULL;

    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    head=prev;
}

// Recursive solution 

Node* reverseNode(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    else{
        
        Node* n=reverseNode(head->next);
        head->next->next=head;
        head->next=NULL;
        return n;
    }
}
int main(){
    Node* node= new Node(7);
    Node* head=node;

    insertAtHead(head,9);
    insertAtHead(head,8);
    insertAtHead(head,2);
    insertAtHead(head,5);
    // reverseNode(head);
    print(head);
    return 0;
}