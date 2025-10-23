#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data=data;
        this->next=nullptr;
        this->prev=nullptr;
    }
};
void insertAtHead(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

bool isPlaindrome(Node* &head, Node* &tail,int length){
   
        int count=1;
        while(count!=length){
            Node* i=head;
            Node* j=tail;
            if(i->data!=j->data){
                return false;
            }
            i=i->next;
            j=j->prev;
            count++;
        }
        return 1;
}

int length(Node* &head){
    Node* temp=head;
    int count=0;
    while(temp!=nullptr){
        temp=temp->next;
        count++;
    }
    return count;
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* node= new Node(9);
    Node* head=node;
    Node* tail=node;
    insertAtHead(head,8);
    insertAtHead(head,7);
    insertAtHead(head,6);
    // insertAtHead(head,0);
    insertAtHead(head,6);
    insertAtHead(head,7);
    insertAtHead(head,8);
    insertAtHead(head,9);
    print(head);
    int a=length(head);
    cout<<isPlaindrome(head,tail,a);
    // uintptr_t address=0x10f7f08;
    // int* ptr= reinterpret_cast<int*>(address);
    // cout<<*ptr;
    
    return 0;
}