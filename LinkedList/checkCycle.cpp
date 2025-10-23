#include <iostream>
#include <unordered_map>

using namespace std;

class ListNode{
    public:
    ListNode* next;
    int data;
    ListNode(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertAtHead(ListNode *&head, int data)
{
    ListNode *temp = new ListNode(data);
    temp->next = head;
    head = temp;
    
}

ListNode *detectCycle(ListNode *head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(slow!= NULL || fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                slow=head;
                while(fast!=slow){
                    fast=fast->next;
                    slow=slow->next;
                    if(fast==slow) return slow;
                }
            }
        }

        return NULL;
}
// void print(ListNode* head){
//     ListNode* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
bool hasCycle(ListNode *head)
{
    unordered_map<ListNode *, bool> map;
    ListNode *temp = head;
    if (head == NULL)
    {
        return false;
    }

    while (temp != NULL)
    {
        if (map.find(temp) != map.end())
        {
            return true;
        }
        else
        {
            map[temp] = true;
        }
        temp = temp->next;
    }
    return false;
}


int main()
{
    ListNode* head=new ListNode(4);
    ListNode* cy;

    // insertAtHead(head,4);
    // insertAtHead(head,3);
    insertAtHead(head,0);
    insertAtHead(head,2);

    insertAtHead(head,3);
    ListNode* temp=head;
    int count=0;
    ListNode* ly;
    while(temp!=NULL){
        ly=temp;
        count+=1;
        if(count==2){
            cy=temp;
        }
        temp=temp->next;
    }

    // cout<<cy->data;
    // cout<<ly->data;
    ly->next=cy;
    // cout<<hasCycle(head);
    cout<<detectCycle(head)->data;
    return 0;
}