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

void traverse_preorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }

    cout<<root->val<<" ";
    traverse_preorder(root->left);
    traverse_preorder(root->right);
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

void traverse_postorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }

    traverse_postorder(root->left);
    traverse_postorder(root->right);
    cout<<root->val<<" ";
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
    cout<<endl;
}

Node* input()
{
    Node* root = NULL;
    
    int root_val;
    cin>>root_val;
    
    if(root_val==-1)
    {
        return root;
    }
    else
    {
        root = new Node(root_val);
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

int count_Node_levelorder(Node* root)
{
    int count = 0;
    if(root==NULL)
    {
        return count;
    }

    queue<Node*>q;
    q.push(root);

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        count++;

        if(temp->left!=NULL)
        {
            q.push(temp->left);
        }
        if(temp->right!=NULL)
        {
            q.push(temp->right);
        }

    }

    return count;

}

int count_Node(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }

    int l = count_Node(root->left);
    int r = count_Node(root->right);

    return l+r+1;
}

int count_LeafNode(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    if(root->left==NULL && root->right==NULL)
    {
        return 1;
    }

    int l = count_LeafNode(root->left);
    int r = count_LeafNode(root->right);
    return l+r;
}

int max_height(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    if(root->left==NULL && root->right==NULL)
    {
        return 0;
    }

    int l = max_height(root->left);
    int r = max_height(root->right);
    return max(l, r) + 1;
}

int main()
{
    Node* root = input();

    cout<<"Pre Order: ";
    traverse_preorder(root);
    cout<<endl;

    cout<<"In Order: ";
    traverse_inorder(root);
    cout<<endl;

    cout<<"Post Order: ";
    traverse_postorder(root);
    cout<<endl;

    cout<<"Level Order: ";
    traverse_levelorder(root);
    cout<<endl;

    int size = count_Node(root);
    cout<<"Number of Nodes = "<<size<<endl;

    int leaf_Node = count_LeafNode(root);
    cout<<"Leaf Node = "<<leaf_Node<<endl;

    cout<<"Maxumum Height = "<<max_height(root)<<endl;
    

    
    
    return 0;
}

