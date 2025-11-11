#include<bits/stdc++.h>
using namespace std;

class MyStack
{
    public:

    vector<int>v;

    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
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