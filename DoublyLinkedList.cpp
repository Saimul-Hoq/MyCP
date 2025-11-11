#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *nextNode;
    Node *backNode;

};

int main()
{
    Node *newNode, *currentNode, *firstNode=NULL;

    int n;
    cout<<"Enter Element Number: ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        newNode = new Node;

        cout<<"Enter Data: ";
        cin>>newNode->data;
        newNode->nextNode=NULL;
        newNode->backNode==NULL;

        if(firstNode==NULL)
        {
            firstNode = newNode;
            currentNode = newNode;
        }
        else
        {
            currentNode->nextNode = newNode;
            newNode->backNode = currentNode;
            currentNode = newNode;
        }
    }

    return 0;

} 