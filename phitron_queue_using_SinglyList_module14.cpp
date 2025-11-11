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


int main()
{
    MyQueue q;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        q.push(val);
    }

    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    
    
    return 0;
}