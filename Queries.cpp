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
        head=newNode;
        tail=newNode;
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



void delete_head(Node* &head)
{
    Node* temp = head;
    head = head->next;
    delete temp;
}

void delete_any_pos(Node* head, int pos)
{
    Node* temp = head;
    for(int i=1; i<pos; i++)
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



int main()
{

    Node *head=NULL, *tail=NULL;
    
    int q, size=0, x, v;
    cin>>q;
    while(q--)
    {
        cin>>x>>v;
        if(x==0)
        {
            insert_at_head(head, tail, v);
            size++;

        }
        else if(x==1)
        {
            insert_at_tail(head, tail, v);
            size++;
        }
        else if(x==2)
        {
            if(size>0)
            {
                if(v>=0 && v<size)
                {
                    if(v==0)
                    {
                        delete_head(head);
                        size--;
                    }
                    else if(v==(size-1))
                    {
                        delete_tail(head, tail);
                        size--;
                    }
                    else
                    {
                        delete_any_pos(head, v);
                        size--;
                    }
                }
            }
        }

        display(head);
    }

    



    
    
    
    return 0;
}