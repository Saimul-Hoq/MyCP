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



void delete_any_pos(Node* temp, Node* pos)
{
    temp->next = pos->next;
    
    delete pos;
}

void delete_tail(Node* temp, Node* &tail)
{
   
    temp->next=NULL;
    delete tail;
    tail = temp;
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
    
    Node *temp;
    for(Node *i=head; i!=NULL; i=i->next)
    {
        temp=i;
        for(Node *j=i->next; j!=NULL; j=j->next)
        {
            
            if(i->val==j->val)
            {
                if(j==tail)
                {
                    
                    delete_tail(temp, tail);
                    j=temp;

                    
                }
                else
                {
                    delete_any_pos(temp, j);
                    j=temp;
                    
                }
            }
            temp=j;

        }
    }
    display(head);
    
    
    return 0;
}