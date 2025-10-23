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


void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
int sum(Node* &head){
    Node* temp= head;
    int sum=0;
    while(temp!=NULL){
        sum+=temp->data;
        temp=temp->next;
    }
    return sum;
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* n= new Node(4);
    Node* tail= n;
    Node* head=n;
    insertAtTail(tail,9);
    insertAtTail(tail,5);
    insertAtTail(tail,12);
    insertAtTail(tail,60);
    int a= sum(head);
    cout<<a<<endl;
    print(head);
    // cout<<tail->data;

    return 0;
}