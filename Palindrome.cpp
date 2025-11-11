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




int main()
{
    Node *head=NULL, *tail=NULL;

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

    bool flag = true;
    for(Node* i=head, *j=tail; i!=j && i->prev!=j; i=i->next, j=j->prev)
    {
        if(i->val!=j->val)
        {
            flag = false;
            break;
        }
    }

    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    
    
    return 0;
}