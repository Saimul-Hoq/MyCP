// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     int n, s;
//     cin>>n;
//     string str[n];

//     for(int i=0; i<n; i++)
//     {
//         cin>>str[i];
//     }

//     for(int i=0; i<n; i++)
//     {
//         s = str[i].size();
//         string s1=str[i];

//         if(s>10)
//         {
//             cout<<s1[0]<<s-2<<s1[s-1]<<endl;
//         }
//         if(s<=10)
//         {
//             cout<<s1<<endl;
//         }
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;

};

void fun(Node &obj_node, Node *ptr_node)
{
    obj_node.val=20;
    ptr_node->val=20;
}

int main()
{
    
    Node obj_node;
    Node* ptr_node = new Node;

    obj_node.val=10;
    obj_node.next=NULL;

    ptr_node->val=10;
    ptr_node->next=NULL;

    fun(obj_node, ptr_node);

    cout<<"Object = "<<obj_node.val<<endl;
    cout<<"Pointer = "<<ptr_node->val<<endl;
    
    return 0;
}