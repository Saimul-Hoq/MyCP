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

int main()
{
    Node *head=NULL, *tail=NULL;
    int size=0;

    int q;
    cin>>q;
    while(q--)
    {
        int x, v;
        cin>>x>>v;

        if(x>=0 && x<=size)
        {
            if(x==0)
            {
                insert_at_head(head, tail, v);
                size++;
                cout<<"L -> ";
                display_forward(head);
                cout<<"R -> ";
                display_reverse(tail);

            }
            else if(x==size)
            {
                insert_at_tail(head, tail, v);
                size++;
                cout<<"L -> ";
                display_forward(head);
                cout<<"R -> ";
                display_reverse(tail);
            }
            else
            {
                insert_at_any_pos(head, x, v);
                size++;
                cout<<"L -> ";
                display_forward(head);
                cout<<"R -> ";
                display_reverse(tail);

            }
        }
        else
        {
            cout<<"Invalid"<<endl;
        }


    }

    return 0;
}