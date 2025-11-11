#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int marks;
};

class cmp
{
    public:
    bool operator()(Student l, Student r)
    {
        if(l.marks==r.marks)
        {
            return l.roll>r.roll;
        }
        return l.marks<r.marks;
    }
};

int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;

    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        Student s;
        cin>>s.name>>s.roll>>s.marks;
        pq.push(s);
    }

    int q;
    cin>>q;
    while(q--)
    {
        int command;
        cin>>command;
        
        if(command==0)
        {
            Student st;
            cin>>st.name>>st.roll>>st.marks;
            pq.push(st);

            st = pq.top();
            cout<<st.name<<" "<<st.roll<<" "<<st.marks<<endl;

        }
        else if(command==1)
        {
            if(!pq.empty())
            {
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;

            }
            else
            {
                cout<<"Empty"<<endl;
            }
        }
        else
        {
            if(!pq.empty())
            {
                pq.pop();
            }
            if(!pq.empty())
            {
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
                
            }
            else
            {
                cout<<"Empty"<<endl;
            }
        }
    }
    
    
    return 0;
}