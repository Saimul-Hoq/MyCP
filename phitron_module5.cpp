// #include<bits/stdc++.h>
// using namespace std;

// class Node
// {
//     public:
//     int val;
//     Node *next;

//     Node(int val)
//     {
//         this->val=val;
//         this->next=NULL;
//     }
// };

// int main()
// {
//     Node *head = new Node(10);
//     Node *a = new Node(20);
//     Node *b = new Node(30);

//     head->next=a;
//     a->next=b;

//     cout<<head->val<<endl;
//     cout<<head->next->val<<endl;
//     cout<<head->next->next->val<<endl;

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node *next;
};

int main()
{
    
    int n;
    cout<<"Enter Size: ";
    cin>>n;

    Node *head, *temp, *newNode;

    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            head = new Node;
            cout<<"Enter Value: ";
            cin>>head->val;
            head->next=NULL;
            temp=head;
        }
        else
        {
           newNode = new Node;
           cout<<"Enter value: ";
           cin>>newNode->val;
           newNode->next=NULL;
           temp->next=newNode;
           temp=newNode;


        }
    }

    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<endl;
        temp = temp->next;
    }


    return 0;
}