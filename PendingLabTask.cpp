#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *nextNode;
};





int main()
{
    //Create:
    int n;
    cout<<"Enter element Number: "<<endl;
    cin>>n;
    Node *newNode, *firstNode=NULL, *currentNode;

    for(int i=0; i<n; i++)
    {
        newNode = new Node;

        cout<<"Enter Data: "<<endl;
        cin>>newNode->data;
        newNode->nextNode = NULL;

        if(firstNode==NULL)
        {
            firstNode = newNode;
            currentNode = newNode;
        }
        else
        {
            currentNode->nextNode = newNode;
            currentNode = newNode;
        }
    }

    //Show:
    cout<<"Show: ";
    currentNode=firstNode;
    while(currentNode!=NULL)
    {
        
        cout<<currentNode->data<<" ";
        currentNode=currentNode->nextNode;
    }
    cout<<endl;
    
    //Search:
    int search;
    cout<<"Search: ";
    cin>>search;
    bool check=false;

    currentNode = firstNode;
    while(currentNode!=NULL)
    {
        if(currentNode->data==search)
        {
            check = true;
            break;
        }
        else 
        {
            currentNode = currentNode->nextNode;
        }
    }
    if(check == true)
    {
        cout<<"Found"<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }

    //Find Smallest:
    
    int small=firstNode->data;

    currentNode = firstNode;
    while(currentNode!=NULL)
    {
        if(small>currentNode->data)
        {
            small=currentNode->data;
            currentNode = currentNode->nextNode;
        }
        else
        {
            currentNode = currentNode->nextNode;
        }
    }
    cout<<"Smallest = "<<small<<endl;

    return 0;

}

