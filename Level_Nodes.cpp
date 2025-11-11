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

int getDepth(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }

    
    if(root->left==NULL && root->right==NULL)
    {
        return 0;
    }

    int l = getDepth(root->left);
    int r = getDepth(root->right);
    return max(l,r)+1;
}


void levelPrint(Node* root, int x)
{
    queue< pair<Node*, int> >q;
    pair<Node*, int>p;
    p = make_pair(root, 0);
    q.push(p);
    int flag = 0;

    while(!q.empty())
    {
        Node* temp = (q.front()).first;
        int level = (q.front()).second;
        q.pop();

        if(flag==0 && level==x)
        {
            cout<<temp->val;
            flag=1;
        }

        else if(flag==1 && level==x)
        {
            cout<<" "<<temp->val;
        }

        if(temp->left!=NULL)
        {
            pair<Node*, int>pp;
            pp = make_pair(temp->left, level+1);
            q.push(pp);
        }
        if(temp->right!=NULL)
        {
            pair<Node*, int>pp;
            pp = make_pair(temp->right, level+1);
            q.push(pp);
        }
    }
}



int main()
{
    Node* root = input();
    int x;
    cin>>x;

    int depth = getDepth(root);
    if(x>=0 && x<=depth)
    {
        levelPrint(root, x);
    }
    else
    {
        cout<<"Invalid"<<endl;
    }
    
    
    
    
    return 0;
}