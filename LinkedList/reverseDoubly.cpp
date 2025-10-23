#include <iostream>

using namespace std;

class Node{
    public:
    Node* next;
    Node* prev;
    int data;
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};


void insertAtTail(Node *&tail, int data)
{
    Node *node = new Node(data);
    tail->next = node;
    node->prev = tail;
    tail = node;
}

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}


void reverse(Node* &head){
    Node* curr=head;
    Node* prev=NULL;
    while(curr!=NULL){
       prev=curr->prev;
       curr->prev=curr->next;
       curr->next=prev;
       curr=curr->prev; 
    }
    head=prev->prev;
}




int main(){
    Node* node= new Node(3);
    Node* tail=node;
    Node* head=node;

    insertAtTail(tail,4);
    insertAtTail(tail,5);
    
    print(head);
    reverse(head);
 print(head);
    return 0;
}
