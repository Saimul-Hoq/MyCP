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








int main()
{

    Node *head1=NULL, *tail1=NULL;
    int n;
    while(1)
    {
        cin>>n;
        if(n==-1)
        {
            break;
        }
        insert_at_tail(head1, tail1, n);
    }

    Node *head2=NULL, *tail2=NULL;
    while(1)
    {
        cin>>n;
        if(n==-1)
        {
            break;
        }
        insert_at_tail(head2, tail2, n);
    }
    int check=0;
    Node *temp1, *temp2;
    for(temp1=head1, temp2=head2; temp1!=NULL && temp2!=NULL; temp1=temp1->next, temp2=temp2->next)
    {
        if(temp1->val!=temp2->val)
        {
            check=1;
            break;
        }
    }

    if(check==0 && temp1==NULL && temp2==NULL)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    
    
    return 0;
}