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

    Node *minNode = head, *maxNode=head;
    
    for(Node *temp = head->next; temp!=NULL; temp=temp->next)
    {
        if(minNode->val>temp->val)
        {
            minNode=temp;
        }
        if(maxNode->val<temp->val)
        {
            maxNode=temp;
        }
    }
    cout<<maxNode->val-minNode->val<<endl;

    
    return 0;
}