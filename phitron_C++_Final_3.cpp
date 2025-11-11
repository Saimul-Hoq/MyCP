#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{
    int n;
    cin>>n;
    Student student[n];

    for(int i=0; i<n; i++)
    {
        cin>>student[i].nm>>student[i].cls>>student[i].s>>student[i].id;
    }

    for(int i=0, j=n-1; i<=j; i++, j--)
    {
        swap(student[i].s, student[j].s);
    }

    for(int i=0; i<n; i++)
    {
        cout<<student[i].nm<<" "<<student[i].cls<<" "<<student[i].s<<" "<<student[i].id<<endl;
    }

    return 0;


}