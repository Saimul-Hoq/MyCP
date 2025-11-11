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


int sum(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    if(root->left==NULL && root->right==NULL)
    {
        return 0;
    }

    int l = sum(root->left);
    int r = sum(root->right);
    return l+r+root->val;
}

int main()
{
    Node* root = input();

    

    cout<<sum(root)<<endl;
    
    
    return 0;
}