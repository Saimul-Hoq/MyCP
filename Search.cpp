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

    int t;
    cin>>t;
    while(t--)
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
        int x;
        cin>>x;

        Node *temp=head;
        for(int i=0; temp!=NULL; i++)
        {
            if(temp->val==x)
            {
                cout<<i<<endl;
                break;
            }
            temp=temp->next;
        }
        if(temp==NULL)
        {
            cout<<-1<<endl;
        }

    }
    
    return 0;
}