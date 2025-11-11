#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

int main()
{
    Node *newNode, *root=NULL, *current;

    int n;
    cout<<"How Element number: ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        newNode = new Node;

        cout<<"Enter Data: ";
        cin>>newNode->data;
        newNode->left=NULL;
        newNode->right=NULL;

        if(root==NULL)
        {
            root = newNode;
            current = newNode;
        }
        else
        {
            current = root;

            while(current!=NULL)
            {
                if(newNode->data<current->data)
                {
                    if(current->left==NULL)
                    {
                        current->left=newNode;
                        break;
                    }
                    else
                    {
                        current = current->left;
                    }
                }
                else if(newNode->data>current->data)
                {
                    if(current->right==NULL)
                    {
                        current->right=newNode;
                        break;
                    }
                    else
                    {
                        current = current->right;
                    }
                }
                else
                {
                    cout<<"Invalid Entry."<<endl;
                }
            }
        }
    }

    return 0;

}