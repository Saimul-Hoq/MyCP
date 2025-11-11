#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* input()
{
    Node* root = NULL;

    int val;
    cin>>val;
    if(val==-1)
    {
        return root;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node*>q;
    q.push(root);
    int left, right;

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        cin>>left>>right;

        if(left!=-1)
        {
            temp->left = new Node(left);
        }
        if(right!=-1)
        {
            temp->right = new Node(right);
        }

        if(temp->left!=NULL)
        {
            q.push(temp->left);
        }
        if(temp->right!=NULL)
        {
            q.push(temp->right);
        }
    }

    return root;
}


void traverse_inorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }

    traverse_inorder(root->left);
    cout<<root->val<<" ";
    traverse_inorder(root->right);
}

void traverse_levelorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }

    queue<Node*>q;
    q.push(root);

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        cout<<temp->val<<" ";

        if(temp->left!=NULL)
        {
            q.push(temp->left);
        }
        if(temp->right!=NULL)
        {
            q.push(temp->right);
        }
    }
}

bool search(Node* root, int val)
{
    if(root==NULL)
    {
        return false;
    }
    if(root->val==val)
    {
        return true;
    }

    if(val<root->val)
    {
        return search(root->left, val);
    }
    else if(val>root->val)
    {
        return search(root->right, val);
    }
}

void insert(Node* &root, int val)
{
    if(root==NULL)
    {
        root = new Node(val);
        return;
    }

    if(val<root->val)
    {
        if(root->left==NULL)
        {
            root->left=new Node(val);
        }
        else
        {
            insert(root->left, val);
        }
    }
    else if(val>root->val)
    {
        if(root->right==NULL)
        {
            root->right=new Node(val);
        }
        else
        {
            insert(root->right, val);
        }
    }

}

Node* createBST(int arr[], int left, int right)
{
    if(left>right)
    {
        return NULL;
    }

    int mid = (left+right)/2;
    Node* root = new Node(arr[mid]);

    root->left=createBST(arr, left, mid-1);
    root->right=createBST(arr, mid+1, right);
    return root;                                     
}

int main()
{
    Node* root = input();

    insert(root, 11);
    traverse_inorder(root);
    cout<<endl;
    traverse_levelorder(root);
    cout<<endl;

    if(search(root, 110))
    {
        cout<<"Found"<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }
    
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0; i<n; i++)
    // {
    //     cin>>arr[i];
    // }

    // Node* root = createBST(arr, 0, n-1);

    // traverse_inorder(root);
    // cout<<endl;

    // traverse_levelorder(root);
    // cout<<endl;
    
    return 0;
}