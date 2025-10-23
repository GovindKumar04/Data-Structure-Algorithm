#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
public:
    Node *insertAtEnd(Node *head, int x)
    {
        if(head==NULL){
            return new Node(x);
        }
        Node *curr = head;
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        Node *node = new Node(x);
        curr->next = node;
        return head;
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

