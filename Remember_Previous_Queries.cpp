#include<bits/stdc++.h>
using namespace std;

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

        if(x==0)
        {
            insert_at_head(head, tail, v);
            size++;
            cout<<"L -> ";
            display_forward(head);
            cout<<"R -> ";
            display_reverse(tail);
        }
        else if(x==1)
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
            if(v>=0 && v<size)
            {
                if(v==0)
                {
                    delete_head(head, tail);
                    
                }
                else if(v==(size-1))
                {
                    delete_tail(head, tail);
                }
                else
                {
                    delete_any_pos(head, v);
                }
                size--;
                

            }
            cout<<"L -> ";
            display_forward(head);
            cout<<"R -> ";
            display_reverse(tail);
        }
    }
    
    
    return 0;
}