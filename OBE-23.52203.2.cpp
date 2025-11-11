#include<iostream>
using namespace std;
int main()
{
    int mark[5], sum=0, avg;
    string sub[5];
    sub[0]="Math"; sub[1]="Physics"; sub[2]="Chemistry"; sub[3]="Economics"; sub[4]="English";
    cout<<"Enter the marks for five subjects:"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<sub[i]<<":";
        cin>>mark[i];
        cout<<endl;
    }

    for(int i=0; i<5; i++)
    {
        if(mark[i]>=90 && mark[i]<=100)
        {
        cout<<sub[i]<<":"<<"Grade A+"<<", "<<"CGPA 4.00"<<endl;
        }

        else if(mark[i]>=85 && mark[i]<90)
        {
        cout<<sub[i]<<":"<<"Grade A"<<", "<<"CGPA 3.75"<<endl;
        }

        else if(mark[i]>=80 && mark[i]<85)
        {
        cout<<sub[i]<<":"<<"Grade B+"<<", "<<"CGPA 3.50"<<endl;
        }

        else if(mark[i]>=75 && mark[i]<80)
        {
        cout<<sub[i]<<":"<<"Grade B"<<", "<<"CGPA 3.25"<<endl;
        }

        else if(mark[i]>=50 && mark[i]<60)
        {
        cout<<sub[i]<<":"<<"Grade D"<<", "<<"CGPA 2.25"<<endl;
        }

        else if(mark[i]>=0 && mark[i]<50)
        {
        cout<<sub[i]<<":"<<"Grade F"<<", "<<"CGPA 0.00"<<endl;
        }
        else
        {
            cout<<sub[i]<<":"<<"Grade D"<<", "<<"CGPA 2.25"<<endl;
        }
        
    }

   



    return 0;
}