#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int mark;
};

class cmp
{
    public:
    bool operator()(Student l, Student r)
    {
        if(l.mark==r.mark)
        {
            return l.roll>r.roll;
        }
        return l.mark<r.mark;
    }
};


int main()
{
    //max priority queue
    priority_queue<int>pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    cout<<pq.top()<<endl;
    pq.push(100);
    cout<<pq.top()<<endl;

    //min priority queue
    priority_queue<int, vector<int>, greater<int> >mpq;
    mpq.push(10);
    mpq.push(5);
    mpq.push(20);
    cout<<mpq.top()<<endl;
    mpq.pop();
    cout<<mpq.top()<<endl;

    //custom priority queue
    priority_queue<Student, vector<Student>, cmp>cpq;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        Student student;
        cin>>student.name>>student.roll>>student.mark;
        cpq.push(student);
    }

    while(!cpq.empty())
    {
        cout<<cpq.top().name<<" "<<cpq.top().roll<<" "<<cpq.top().mark<<endl;
        cpq.pop();
    }


    

    
    return 0;
}