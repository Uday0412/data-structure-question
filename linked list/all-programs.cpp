#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};
// time cplexcity=O(1)
void insertAtstart(Node *&head, int val)
{
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}
// time cplexcity=O(n)
void insertatlast(Node *&head, int val)
{
    Node *new_Node = new Node(val);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_Node;
}
// time cpoplexcity=O(n)
void insertAtposition(Node *&head, int val, int pos)
{
    if (pos == 0)
    {
        insertAtstart(head, val);
        return;
    }
    Node *new_node = new Node(val);
    Node *temp = head;
    int current_pos = 0;
    while (current_pos != pos - 1)
    {
        temp = temp->next;
        current_pos++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}
// time cpoplexcity=O(n)
void updateATposition(Node *&head, int k, int val)
{
    Node* temp=head;
    int curr_pos=0;

    while (curr_pos != k)
    {
        temp = temp->next;
        curr_pos++;
    }
    // temp will be pinting tO the kth pOsitiOn
    temp->val = val;
}

void deleteAthead(Node* &head)
{
    Node *temp = head;
    head = head->next;
    free(temp);
}
// delete at tail
void deleteAttail(Node* &head)
{
    Node* second_last=head;
    while(second_last->next->next!=NULL)
    {
        second_last=second_last->next;
    }
    // NOW secOnd last POints tO secOnd last NOde

    Node* temp=second_last->next;
    second_last->next=NULL;
    free(temp);
}
// delete at sepcified positiOn
void deleteAtposition(Node* &head,int pos)
{
    if(pos==0)
    {
        deleteAttail(head);
        return ;
    }
    int curr_pos=0;
    Node* prev=head;
    while(curr_pos!=pos)
    {
        prev=prev->next;
        curr_pos++;
    }

    Node* temp=prev->next;
    prev->next=prev->next->next;
    free(temp);
}

void display(Node* head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "null" << endl;
}
int main()
{
    Node *head = NULL;

    // insert the value
    insertAtstart(head, 4);
    insertAtstart(head, 3);
    insertAtstart(head, 2);
    insertAtstart(head, 1);
    display(head);

    // insert the value at last
    insertatlast(head, 5);
    display(head);

    // insert the value specified pOsitiOn
    insertAtposition(head, 4, 1);
    display(head);

    // update the value in given pOsitiOn
    updateATposition(head, 2, 5);
    display(head);

    // delete at head
    deleteAthead(head);
    display(head);

    // delete at tail
    deleteAttail(head);
    display(head);

    // delete at sepcified positiOn
    
    return 0;
}