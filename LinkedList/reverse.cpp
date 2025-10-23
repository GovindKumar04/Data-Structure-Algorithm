#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node *next=NULL;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void print(Node* &head){
    Node* curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" -> ";
        curr=curr->next;
    }
    cout<<endl;
}

void insertAtHead(Node* &head, int data){
    Node* newNode=new Node(data);
    newNode->next=head;
    head=newNode;
}

void reverseNode(Node* &head){
    if(head==NULL || head->next==NULL){
        return;
    }else{
        Node* prev=NULL;
        Node* curr=head;
        Node* forward=NULL;

        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        head=prev;
    }

}
int main(){
    Node* node=new Node(5);
    Node* head=node;
    insertAtHead(head,7);
    insertAtHead(head,4);
    insertAtHead(head,2);
    
    print(head);
    reverseNode(head);
    print(head);
    return 0;
}