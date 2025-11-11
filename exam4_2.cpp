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
            cin>>student[i].id;
            cin>>student[i].name;
            cin>>student[i].section;
            cin>>student[i].mark;
        }
        
        
            
        int max=student[0].mark, ind=0;
        for(int i=1; i<3; i++)
        {
            if(student[i].mark>max || (student[i].mark==max && student[i].id<student[ind].id))
            {
                max=student[i].mark; 
                ind=i;
            }
        }
        
       
        cout<<student[ind].id<<" ";
        cout<<student[ind].name<<" ";
        cout<<student[ind].section<<" ";
        cout<<student[ind].mark<<endl;
        
      
        

    }
    return 0;
}
