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

Node *delete_last(Node *head)
{
    if(head == NULL)
        return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    Node *curr = head;    
    while(curr->next!=NULL)
    {
        curr = curr->next;
    }
    curr->prev->next = NULL;
    delete curr;

    return head;         
}

Node *delete_head(Node *head)
{
    if(head == NULL)
        return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
        
    Node *temp = head;
    head =  head->next;
    head->prev = NULL;
    delete temp;
    return head;         
}

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
    Node *temp = new Node(6);
    Node *temp2 = new Node(7);
    Node *temp3 = new Node(8);
    head->next = temp;
    temp->prev = head;
    temp->next = temp2;
    temp2->prev = temp;
    temp2->next = temp3;
    temp3->prev = temp2;
    Node *head1 = insertbegin(head,2);
    Node *head2 = insertEnd(head1,10);
    print_dll(head2);
    //Node *headr = reverse(head2);
    Node *headr = delete_head(head2);
    Node *headr2 = delete_last(headr);
    print_dll(headr2);
    


    return 0;
}