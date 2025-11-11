#include<bits/stdc++.h>
using namespace std;

vector<int>v;

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




void leafNode(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    if(root->left==NULL && root->right==NULL)
    {
        v.push_back(root->val);
        //return;
    }

    leafNode(root->left);
    leafNode(root->right);
    

}

int main()
{
    Node* root = input();

    leafNode(root);

    sort(v.begin(), v.end(), greater<int>());

    for(auto it=v.begin(); it<v.end(); it++)
    {
        if(it==v.begin())
        {
            cout<<*it;
        }
        else
        {
            cout<<" "<<*it;
        }
    }
    cout<<endl;

    
    
    
    return 0;
}