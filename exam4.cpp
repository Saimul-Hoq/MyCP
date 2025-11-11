#include <bits/stdc++.h>

using namespace std;

struct Student
{
    
    int id;
    char name[100];
    char section;
    int mark;
};

int main()
{
    Student student[3];

    int t;
    cin>>t;
    while(t--)
    {
        // Write your code here
        
        for(int i=0; i<3; i++)
        {
            cin>>student[i].id>>student[i].name>>student[i].section>>student[i].mark;
        }
        
        if(student[0].mark == student[1].mark && student[1].mark==student[2].mark && student[0].mark==student[2].mark)
        {
            int minID=student[0].id, indID=0;
            for(int i=1; i<3; i++)
            {
                if(student[i].id<minID)
                {
                    minID=student[i].id;
                    indID=i;
                }
            }
            cout<<student[indID].id<<" ";
            cout<<student[indID].name<<" ";
            cout<<student[indID].section<<" ";
            cout<<student[indID].mark<<endl;
            continue;
        }
        
        int max=student[0].mark, ind=0;
        for(int i=1; i<3; i++)
        {
            if(student[i].mark>max)
            {
                max=student[i].mark;
                ind=i;
            }
        }
        
        if(student[0].mark != student[1].mark && student[1].mark!=student[2].mark && student[0].mark!=student[2].mark )
        {
            cout<<student[ind].id<<" ";
            cout<<student[ind].name<<" ";
            cout<<student[ind].section<<" ";
            cout<<student[ind].mark<<endl;
        }
      
        else
        {
            for(int i=0; i<3; i++)
            {
                if(i!=ind)
                {
                    if(student[ind].mark == student[i].mark)
                    {
                        if(student[ind].id<student[i].id)
                        {
                            cout<<student[ind].id<<" ";
                            cout<<student[ind].name<<" ";
                            cout<<student[ind].section<<" ";
                            cout<<student[ind].mark<<endl;
                        }
                        else
                        {
                            cout<<student[i].id<<" ";
                            cout<<student[i].name<<" ";
                            cout<<student[i].section<<" ";
                            cout<<student[i].mark<<endl;
                        }
                    }
                }
            }
        
        }
        

    }
    return 0;
}
