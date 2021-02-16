#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int d)
    {
        data = d;
        prev = next = NULL;
    }

};

Node *reverse(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *prev = NULL;
    Node *curr = head;
    while(curr!=NULL)
    {
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr = curr->prev;
    }
    return prev;    
}

Node *insertbegin(Node *head, int k)
{
    Node *temp = new Node(k);
    temp->next = head;
    if(head!=NULL)
        head->prev = temp;
    return temp;    
}

Node *insertEnd(Node *head, int k)
{
    Node *temp = new Node(k);
    Node *curr = head;
    if (head==NULL)
        return temp;
    while(curr->next!=NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    return head;
}

void print_dll(Node *head)
{
    Node *curr = head;
    while(curr!=0)
    {
        cout<<curr->data<<endl;
        curr = curr->next;
    }
}



int main()
{
    Node *head = new Node(5);