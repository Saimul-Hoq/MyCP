
//1.


/*#include<iostream>
using namespace std;


bool check = false;
int even=0, odd=0;

struct Node
{
    int data;
    Node *left;
    Node *right;
};


void preorder(Node *current)
{
    if(current != NULL)
    {
        cout<<current->data<<" ";
        preorder(current->left);
        preorder(current->right);
    }
}

void inorder(Node *current)
{
   
    if(current != NULL)
    {
        inorder (current->left);
        cout<<current->data<<" ";
        
        inorder (current->right);
    }
}


void postorder(Node *current)
{
    if(current != NULL)
    {
        postorder(current->left);
        postorder(current->right);
        cout<<current->data<<" ";
    }
}

void search(Node *current, int item)
{
   

    if(current != NULL)
    {
        search(current->left, item);
        if(current->data==item)
        {
            check = true;
        }
        if((current->data)%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        
        search(current->right, item);
    }

    
}




int main()
{
    Node *newNode, *root=NULL, *current;

    int n;
    cout<<"Enter Element number: ";
    cin>>n;

    int arr[n];

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


    cout<<endl<<"Pre-Order Traversal: ";
    current = root;
    preorder(current);

    cout<<endl<<"In-Order Traversal: ";
    current = root;
    inorder(current);

    cout<<endl<<"Post-Order Traversal: ";
    current = root;
    postorder(current);
    

    int item;
    cout<<endl<<"Search: ";
    cin>>item;
    current = root;

    search(current, item);

    if(check==true)
    {
        cout<<"Item FOUND"<<endl;
    }
    else
    {
        cout<<"Item Not Found"<<endl;
    }
    cout<<"Even Elements: "<<even<<endl;
    cout<<"Odd Elements: "<<odd<<endl;

    

    return 0;

}*/

/*#include<iostream>
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
    Node *newNode, *firstNode=NULL, *currentNode, *prevNode;

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
     cout<<"Displaying All Elements: ";
    currentNode=firstNode;
    while(currentNode!=NULL)
    {
        
        cout<<currentNode->data<<" ";
        currentNode=currentNode->nextNode;
    }
    cout<<endl;

     //First Insert:
    newNode = new Node;

    cout<<"first Insert Data: ";
    cin>>newNode->data;
    newNode->nextNode = NULL;

    newNode->nextNode = firstNode;

    firstNode = newNode;
    //Display:
    cout<<"After Inserting At The Begginning"<<endl;
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
    cout<<"After Inserting After a given Node:"<<endl;
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

     //Delet Node:
    //First Node Delete:
    cout<<"Deleting First Value: ";
    currentNode = firstNode;

    firstNode = currentNode->nextNode;

    currentNode->nextNode = NULL;

    delete currentNode;
    //Display:
    cout<<"After deleting First Node:"<<endl;
    currentNode=firstNode;
    while(currentNode!=NULL)
    {
        
        cout<<currentNode->data<<" ";
        currentNode=currentNode->nextNode;
    }
    cout<<endl;

    //Last Node Delete:
    cout<<"Deleting Last Value: ";
    
    currentNode = firstNode;

    while(currentNode->nextNode!=NULL)
    {
        prevNode = currentNode;
        currentNode = currentNode->nextNode;
    }

    prevNode->nextNode = NULL;

    delete currentNode;
    //Display:
    cout<<"After deleting last Node:"<<endl;
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

}*/

//3.

#include<iostream>
using namespace std;

int shift=0, comparison=0;


void insertionSort(int arr[], int soa)
{
    int j;
    for(int i = 1; i<soa ; i++)
    {
        int key = arr[i];
        for( j = i-1; j>=0 ; j--)
        {
            comparison++;
            
            if(arr[j] > key)
            {
                arr[j+1] = arr[j];
                shift++;
            }
            else 
            {
                break;
            }
        }
        arr[j+1]=key;
        
    }
}

int main()
{
    int size;
    cout<<"Enter size:";
    cin>>size;

    int arr[size];

    cout<<"Enter elements: "<<endl;

    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    insertionSort(arr, size);

    cout<<"Sorted Elements: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Comparisons = "<<comparison<<endl;
    cout<<"Shifts = "<<shift<<endl;

    return 0;



}

