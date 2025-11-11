#include<bits/stdc++.h>
using namespace std;

class MyStack
{
    public:

    list<int>l;

    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
    void display()
    {
        while(!empty())
        {
            cout<<top()<<" ";
            pop();
        }
        cout<<endl;
    }


};

int main()
{
    MyStack st;

    int n, val;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>val;
        st.push(val);
    }

    st.display();
    
    
    return 0;
}