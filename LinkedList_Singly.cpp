#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};


void insert_at_head(Node* &head, Node* &tail, int val)
{
    
    Node *newNode = new Node(val);

    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next=head;
    head=newNode;
}

void insert_at_tail(Node* &head, Node* &tail, int val)
{
   
    Node *newNode = new Node(val);
    
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;

}

void insert_at_any_pos(Node* &head, int pos, int val)
{
    
    Node *newNode = new Node(val);
    Node *temp=head;        
            
    for(int i=2; i<pos; i++)
    {
        temp=temp->next;
    }
    newNode->next = temp->next;
    temp->next=newNode;
        
    
}

void display(Node* &head)
{
    Node *temp;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void display_reverse(Node* temp)
{

    if(temp==NULL)
    {
        return;
    }
    
    display_reverse(temp->next);
    cout<<temp->val<<" ";
    return;

}

void reverse(Node* &head, Node* &temp)
{
    if(temp->next==NULL)
    {
        head = temp;
        return;
    }
    
    reverse(head, temp->next);
    temp->next->next=temp;
    temp->next=NULL;
}

void delete_head(Node* &head)
{
    Node* temp = head;
    head = head->next;
    delete temp;
}

void delete_any_pos(Node* head, int pos)
{
    Node* temp = head;
    for(int i=2; i<pos; i++)
    {
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = deleteNode->next;
    
    delete deleteNode;
}

void delete_tail(Node* head, Node* &tail)
{
    Node *temp = head;
    while(temp->next!=tail)
    {
        temp=temp->next;
        
    }
    temp->next=NULL;
    delete tail;
    tail = temp;
}

void selection_sort(Node* head)
{
    Node* minNode;
    

    for(Node* i=head; i->next!=NULL; i=i->next)
    {
        minNode=i;
        for(Node* j=i->next; j!=NULL; j=j->next)
        {
            if(minNode->val>j->val)
            {
                minNode=j;
            }
        }
        swap(minNode->val, i->val);

    }

}

bool detect_cycle(Node* head)
{
    Node* slow = head;
    Node* fast = head;
    bool flag=false;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            flag = true;
            break;
        }
    }
    
    return flag;


}

int main()
{

    Node *head=NULL, *tail=NULL;

    cout<<"Enter values: ";
    int n;
    while(1)
    {
        cin>>n;
        if(n==-1)
        {
            break;
        }
        insert_at_tail(head, tail, n);
    }

    display(head);

    // int pos;
    // cout<<"Enter position: ";
    // cin>>pos;
    // cout<<"Enter value: ";
    // cin>>n;
    // insert_at_any_pos(head, pos, n);
    // display(head);

    // cout<<"Insert at head: ";
    // cin>>n;
    // insert_at_head(head, tail, n);
    // display(head);

    // cout<<"Insert at tail: ";
    // cin>>n;
    // insert_at_tail(head, tail, n);
    // display(head);

    // display_reverse(head);
    // cout<<endl;

    // delete_head(head);
    // display(head);

    // delete_any_pos(head, 2);
    // display(head);

    // delete_tail(head, tail);
    // display(head);

    //selection_sort(head);

    // insert_at_head(head, tail, 10);
    // insert_at_tail(head, tail, 20);
    // display(head);

    
    // tail=head;
    // reverse(head, tail);
    // display(head);
    // // insert_at_tail(head, tail, 10);
    // // display(head);
    // cout<<head->val<<" "<<tail->val<<endl;

    //tail->next=head->next->next->next;
    if(detect_cycle(head))
    {
        cout<<"Cycle Detected."<<endl;
    }
    else
    {
        cout<<"No cycle Detected."<<endl;
    }



    
    
    
    return 0;
}