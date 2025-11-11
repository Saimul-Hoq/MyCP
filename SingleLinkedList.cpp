#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *nextNode;
};





int main()
{
    //Implement:
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

    //Display:
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

    //INSERT:

    //First Insert:
    newNode = new Node;

    cout<<"first Insert Data: ";
    cin>>newNode->data;
    newNode->nextNode = NULL;

    newNode->nextNode = firstNode;

    firstNode = newNode;
    //Display:
    currentNode=firstNode;
    while(currentNode!=NULL)
    {
        
        cout<<currentNode->data<<" ";
        currentNode=currentNode->nextNode;
    }
    cout<<endl;

    //currentNode = lastNode.
    currentNode = firstNode;
    while(currentNode->nextNode!=NULL)
    {
        currentNode = currentNode->nextNode;
    }

    //Last Insert:
    newNode = new Node;

    cout<<"Last insert Data: ";
    cin>>newNode->data;
    newNode->nextNode = NULL;

    currentNode->nextNode = newNode;
    currentNode = newNode;
    //Display:
    currentNode=firstNode;
    while(currentNode!=NULL)
    {
        
        cout<<currentNode->data<<" ";
        currentNode=currentNode->nextNode;
    }
    cout<<endl;

    //Middle Insert:
    int prevData;
    cout<<"After which Data you want to insert? ";
    cin>>prevData;

    bool check2 = false;
    currentNode = firstNode;
    while(currentNode!=NULL)
    {
        if(currentNode->data == prevData)
        {
            check2 = true;
            break;
        }
        else
        {
            currentNode = currentNode->nextNode;
        }
    }
    if(check2 == true)
    {
        newNode = new Node;

        cout<<"Enter Data: ";
        cin>>newNode->data;
        newNode->nextNode = NULL;

        newNode->nextNode = currentNode->nextNode;
        
        currentNode->nextNode = newNode;

    }
    else
    {
        cout<<"Item not Found."<<endl;
    }
    //Display:
    currentNode=firstNode;
    while(currentNode!=NULL)
    {
        
        cout<<currentNode->data<<" ";
        currentNode=currentNode->nextNode;
    }
    cout<<endl;

    //Delet Node:
    //First Node Delete:
    cout<<"Deleting First Value: ";
    currentNode = firstNode;

    firstNode = currentNode->nextNode;

    currentNode->nextNode = NULL;

    delete currentNode;
    //Display:
    currentNode=firstNode;
    while(currentNode!=NULL)
    {
        
        cout<<currentNode->data<<" ";
        currentNode=currentNode->nextNode;
    }
    cout<<endl;

    //Last Node Delete:
    cout<<"Deleting Last Value: ";
    Node *prevNode;
    currentNode = firstNode;

    while(currentNode->nextNode!=NULL)
    {
        prevNode = currentNode;
        currentNode = currentNode->nextNode;
    }

    prevNode->nextNode = NULL;

    delete currentNode;
    //Display:
    currentNode=firstNode;
    while(currentNode!=NULL)
    {
        
        cout<<currentNode->data<<" ";
        currentNode=currentNode->nextNode;
    }
    cout<<endl;

    //Middle Delete:
    int item;
    cout<<"Enter which value will be deleted: ";
    cin>>item;
    bool check3=false;

    currentNode = firstNode;
    prevNode = firstNode;

    while(currentNode!=NULL)
    {
        if(currentNode->data == item)
        {
            check3 = true;
            break;
        }
        else
        {
            prevNode = currentNode;
            currentNode = currentNode->nextNode;
        }
    }

   if(check3==true)
   {
       
        prevNode->nextNode = currentNode->nextNode;

        if(currentNode==firstNode)
        {
            firstNode=currentNode->nextNode;
            currentNode->nextNode = NULL; 
            delete currentNode;
        }
        else
        {
            currentNode->nextNode = NULL; 
            delete currentNode;
        }
   
   }
   else
   {
        cout<<"Item Not Found"<<endl;
   }
    

    //Display:
    cout<<"Deleting Chosen Value: ";
    currentNode=firstNode;
    while(currentNode!=NULL)
    {
        
        cout<<currentNode->data<<" ";
        currentNode=currentNode->nextNode;
    }
    cout<<endl;


    return 0;
}