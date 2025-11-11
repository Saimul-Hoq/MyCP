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
    tail=newNode;
}

void delete_head(Node* &head, Node* &tail)
{
    Node* temp = head;
    head = head->next;
    delete temp;
    if(head==NULL)
    {
        tail = NULL;
    }
}

class dNode
{
    public:
    int val;
    dNode *next;
    dNode *prev;

    dNode(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};



void doubly_insert_at_tail(dNode* &head, dNode* &tail, int val)
{
    dNode* newNode = new dNode(val);
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


void delete_tail(dNode* &head, dNode* &tail)
{
    dNode *temp = tail;
    tail = tail->prev;
    delete temp;

    if(tail==NULL)
    {
        head = NULL;
        return;
    }
     
    tail->next = NULL;
}

class MyQueue
{
    public:
    Node *head=NULL;
    Node *tail=NULL;
    int sz=0;

    void push(int val)
    {
        sz++;
        insert_at_tail(head, tail, val);
    }
    void pop()
    {
        sz--;
        delete_head(head, tail);
    }
    int front()
    {
        return head->val;
    }
    int back()
    {
        return tail->val;
    }
    bool empty()
    {
        return (head==NULL);
    }
    int size()
    {
        return sz;
    }
};

class MyStack
{
    public:
    dNode *head=NULL;
    dNode *tail=NULL;
    int sz=0;

    void push(int val)
    {
        sz++;
        doubly_insert_at_tail(head, tail, val);
    }
    void pop()
    {
        sz--;
        delete_tail(head, tail);
    }
    int top()
    {
        return tail->val;
    }
    bool empty()
    {
        return (head==NULL);
    }
    int size()
    {
        return sz;
    }
};

int main()
{
    
    MyStack st;
    MyQueue q;

    int n, m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        st.push(val);

    }

    for(int i=0; i<m; i++)
    {
        int val;
        cin>>val;
        q.push(val);

    }

    bool check = true;

    if(n!=m)
    {
        check = false;
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(st.top()!=q.front())
            {
                check=false;
                break;
            }
            st.pop();
            q.pop();
        }
    }

    if(check)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}