#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insert_at_head(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);

    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail = newNode;
}

void insert_at_any_pos(Node *head, int pos, int val)
{
    Node* newNode = new Node(val);
    Node *back, *front=head;
    for(int i=1; i<=pos; i++)
    {
        back=front;
        front=front->next;
    }
    newNode->prev=back;
    newNode->next=front;
    back->next=newNode;
    front->prev=newNode;
    

}

void delete_head(Node* &head, Node * &tail)
{
    
    Node* temp;
    temp = head;
    head = head->next;
    delete temp;
    
    if(head == NULL)
    {
        
        tail = NULL;
        return;
        
    }
    
   head->prev = NULL;
    
}

void delete_tail(Node* &head, Node* &tail)
{
    Node *temp = tail;
    tail = tail->prev;
    delete temp;

    if(tail==NULL)
    {
        head = NULL;
        return;
    }
     
    tail->next = NULL;
}

void delete_any_pos(Node* head, int pos)
{
    Node* temp = head;
    for(int i=1; i<=pos; i++)
    {
        temp = temp->next;
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp;
}

void display_forward(Node* head)
{
    for(; head!=NULL; head=head->next)
    {
        cout<<head->val<<" ";
    }
    cout<<endl;
}

void display_reverse(Node* tail)
{
    for(; tail!=NULL; tail=tail->prev)
    {
        cout<<tail->val<<" ";
    }
    cout<<endl;
}

void reverse(Node* left, Node* right)
{
    while(left->prev!=right && left!=right)
    {
        swap(left->val, right->val);
        left=left->next;
        right=right->prev;
    }
    
}

int main()
{
    Node *head=NULL, *tail=NULL;
    int val;
    while(1)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    display_forward(head);
    // display_reverse(tail);

    // insert_at_head(head, tail, 10);
    // insert_at_tail(head, tail, 20);
    // display_forward(head);

    // insert_at_any_pos(head, 3, 40);
    // display_forward(head);

    // delete_head(head, tail);
    // display_forward(head);

    // delete_tail(head, tail);
    // display_forward(head);

    // delete_any_pos(head, 2);
    // display_forward(head);
    reverse(head, tail);
    display_forward(head);
    
    
    return 0;
}