#include<bits/stdc++.h>
using namespace std;

int nodes;

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

int getDepth(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }

    nodes++;
    if(root->left==NULL && root->right==NULL)
    {
        return 1;
    }

    int l = getDepth(root->left);
    int r = getDepth(root->right);
    return max(l,r)+1;
}




int main()
{
    nodes = 0;
    Node* root = input();

    int depth = getDepth(root);

    int formula = pow(2, depth)-1;

    if(formula == nodes)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    
    
    
    return 0;
}