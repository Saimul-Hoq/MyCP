#include<iostream>
using namespace std;

struct Semester
{
    int c1_grade;
    int c2_grade;
    int c3_grade;
    int c4_grade;
    int c5_grade;
    double gpa;
};

struct Student
{
    string name;
    int id;
    int age;
    string department;
    double cgpa;

};



int main()
{
    Student student[1];
    Semester sem[12];

    for(int i=0; i<1; i++)
    {
        cout<<"Enter information of student "<<i+1<<": "<<endl;
        cout<<"Name = ";
        //cin>>student[i].name;
        getline(cin, student[i].name);
        //cin.ignore();
        cout<<"ID = ";
        cin>>student[i].id;
        cout<<"Age = ";
        cin>>student[i].age;
        cout<<"Department = ";
        cin>>student[i].department;
        cout<<"Enter marks: "<<endl;
        for(int j=0; j<12; j++)
        {
            cout<<"Semester "<<j+1<<": "<<endl;
            cout<<"Course 1 grade = ";
            cin>>sem[j].c1_grade;
            cout<<"Course 2 grade = ";
            cin>>sem[j].c2_grade;
            cout<<"Course 3 grade = ";
            cin>>sem[j].c3_grade;
            cout<<"Course 4 grade = ";
            cin>>sem[j].c4_grade;
            cout<<"Course 5 grade = ";
            cin>>sem[j].c5_grade;
            sem[j].gpa=(sem[j].c1_grade+sem[j].c2_grade+sem[j].c3_grade+sem[j].c4_grade+sem[j].c5_grade)/5;
        }
        int temp=0;
        for(int k=0; k<12; k++)
        {
            temp+=sem[k].gpa;
        }

        student[i].cgpa=temp/12;
   
    }

    cout<<endl;
    for(int i=0; i<1; i++)
    {
        cout<<"Student "<<i+1<<": "<<endl;
        for(int j=0; j<12; j++)
        {
            cout<<"Semester "<<j+1<<"; GPA = "<<sem[j].gpa<<endl;
        }
        cout<<"CGPA = "<<student[i].cgpa<<endl;
        if(student[i].cgpa>=3.75)
        {
            cout<<"Eligible for 25% waiver."<<endl;
        }
    }

    return 0;
}