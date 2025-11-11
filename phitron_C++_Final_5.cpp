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
};

bool cmp(Student l, Student r)
{
    if(l.eng_mark == r.eng_mark)
    {
        if(l.math_mark == r.math_mark)
        {
            return l.id < r.id;
        }
        return l.math_mark>r.math_mark;
    }
    return l.eng_mark>r.eng_mark;
}

int main()
{
    int n;
    cin>>n;
    Student student[n];

    for(int i=0; i<n; i++)
    {
        cin>>student[i].nm>>student[i].cls>>student[i].s>>student[i].id>>student[i].math_mark>>student[i].eng_mark;
        
    }

    sort(student, student+n, cmp);

    for(int i=0; i<n; i++)
    {
        cout<<student[i].nm<<" "<<student[i].cls<<" "<<student[i].s<<" "<<student[i].id<<" "<<student[i].math_mark<<" "<<student[i].eng_mark<<endl;
        
    }

    return 0;

}