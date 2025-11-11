#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int mark;
    int roll;
};

bool cmp(Student l, Student r)
{
    // if(l.mark > r.mark)
    // {
    //     return true;
    // }
    // else if(l.mark == r.mark)
    // {
    //     if(l.roll < r.roll)
    //     {
    //         return true;
    //     }
    // }
    // return false;

    if(l.mark == r.mark)
    {
        return l.roll < r.roll;
    }
    return l.mark>r.mark;

    
}

int main()
{
    int n;
    cin>>n;
    Student student[n];

    for(int i=0; i<n; i++)
    {
        cin>>student[i].name>>student[i].roll>>student[i].mark;
    }

    //Maximum Minimum from an array of Object:
    //___________________________________________________________________________________________________

    // Student min, max;
    // min=student[0];
    // max=student[0];
    // for(int i=1; i<n; i++)
    // {
    //     if(student[i].mark<min.mark)
    //     {
    //         min=student[i];
    //     }
    //     if(student[i].mark>max.mark)
    //     {
    //         max = student[i];
    //     }
    // }

    // cout<<"Maximum Mark Student: "<<max.name<<" "<<max.mark<<endl;
    // cout<<"Minimum Mark Student: "<<min.name<<" "<<min.mark<<endl;


    //Sorting an array of Object using sort() function:
    //______________________________________________________________________________________________
    sort(student, student+n, cmp);
    cout<<"Output:  "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<student[i].name<<" "<<student[i].roll<<" "<<student[i].mark<<endl;
    }
    

    return 0;
    
}