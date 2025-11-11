#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string nm;
    int cls;
    char s;
    int id;
    int math_mark;
    int eng_mark;
    int total_mark;
};

bool cmp(Student l, Student r)
{
    if(l.total_mark == r.total_mark)
    {
        return l.id<r.id;
    }
    return l.total_mark>r.total_mark;
}

int main()
{
    int n;
    cin>>n;
    Student student[n];

    for(int i=0; i<n; i++)
    {
        cin>>student[i].nm>>student[i].cls>>student[i].s>>student[i].id>>student[i].math_mark>>student[i].eng_mark;
        student[i].total_mark = student[i].math_mark + student[i].eng_mark;
    }

    sort(student, student+n, cmp);

    for(int i=0; i<n; i++)
    {
        cout<<student[i].nm<<" "<<student[i].cls<<" "<<student[i].s<<" "<<student[i].id<<" "<<student[i].math_mark<<" "<<student[i].eng_mark<<endl;
        
    }

    return 0;

}