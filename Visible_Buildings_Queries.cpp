#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int const col=20;
int n,q;
vector<int>arr;


vector<vector<int>>parent(100005, vector<int>(20));


int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>n>>q;
    arr.push_back(INT_MAX); // it is taken to avoid any memory error. 
                            // Like for the last value will be diverted here. And it will end.

    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
    }


    //Step-1
    //Generating Parent
    stack<int>st;
    st.push(0);  // Every index'es last index will be 0, pointing to the end.

    for(int i=n; i>=1; i--)
    {
        // As index 0 has the largest value. the stack will never be empty. 
        // so no need to check if it is empty or not
        int val = arr[i];
        while(arr[st.top()]<=val)
        {
            st.pop();
        }
    
        parent[i][0] = st.top();
        
        st.push(i);   
    }
    
    //Step-2
    //Completing parent
    // Binary Lifting
    for(int k=1; k<col; k++)
    {
        for(int i=1; i<n; i++)
        {
            parent[i][k] = parent[parent[i][k-1]][k-1];
        }
    }

    //Step-3
    //Generating answer
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        int i=a;
        int count=1;
        while(i<=b)
        {
            int k=0; 
            for(; k<col; k++) // continue jumping until condition breaks.
            {                 //jumps 2^k steps at a time. 
                if(parent[i][k]==0) break;
                else if(parent[i][k]>b) break;
            }
            if(k==0)
            {
                break; // if i=5 and 5 will go direct to 7. but b=6. then k will remain 0.
            }          // Then break it. otherwise infinite loop.
            k--;
            count+=(1<<k); // 2^k valid jumps made.

            i = parent[i][k]; // Starts jumping from from different parent and k=0.
                              // Meaning no jumps will be missed.
        }

        cout<<count<<endl;
    }
    
    
    return 0;
}