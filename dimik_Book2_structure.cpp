#include<iostream>
using namespace std;
#define endl "\n"

/*struct Student
{
    int id;
    string name;
};

int main()
{
    Student s1, s2;

    cin>>s1.id;
    cin.ignore();
    getline(cin, s1.name);

    s2.id=4321;
    s2.name="Foysal";

    cout<<s1.id<<"\t"<<s1.name<<endl;
    cout<<s2.id<<"\t"<<s2.name<<endl;

    return 0;
}*/

/*struct Nametype
{
    string first;
    string last;
};

struct Student
{
    int id;
    Nametype name;
};

int main()
{
    Student s[5];

    for(int i=0; i<5; i++)
    {
        cout<<"Student "<<i+1<<" : "<<endl;

        cout<<"Enter id   ";
        cin>>s[i].id;

        cout<<"Enter first name: ";
        cin>>s[i].name.first;

        cout<<"Enter last name: ";
        cin>>s[i].name.last;

        cout<<endl;
    }

    cout<<"OUTPUT:"<<endl<<endl;

    for(int i=0; i<5; i++)
    {
        cout<<"Student "<<i+1<<" : "<<endl;
        
        cout<<"ID = "<<s[i].id<<endl;
        cout<<"First Name = "<<s[i].name.first<<endl;
        cout<<"Last Name = "<<s[i].name.last<<endl;

        cout<<endl;

    }
    return 0;


}*/




/*void sum1(int a)
{
    a+=10;
}

void sum2(int *a)
{
    *a+=10;
} 

int main()
{
    int a=5;

    sum1(a);
    cout<<a<<endl;

    sum2(&a);
    cout<<a<<endl;

    return 0;
}*/


/*struct Nametype
{
    string first;
    string last;
};
struct Student
{
    int id;
    Nametype name;
};

void addInfo(Student *p)
{
    p->id=123;
    p->name.first="Saimul";
    p->name.last="Hoque";
    
}

int main()
{
    Student s;

    addInfo(&s);

    cout<<s.id<<endl;
    
    Student *p=&s;

    cout<<p->name.first<<endl;
    cout<<p->name.last<<endl;

    return 0;

}*/


/*struct Nametype
{
    string first;
    string last;
};

struct Student
{
    int id;
    Nametype name;
    int mark;
    string grade;
};

void calGrade(Student *p)
{
    int mark = p->mark;
    if(mark>=80)
    {
        p->grade="A+";
    }
    else if(mark>=70)
    {
        p->grade="B+";
    }
    else if(mark>=60)
    {
        p->grade="C+";
    }
    else
    {
        p->grade="Not Good";
    }

}



int main()
{
    int n;
    cout<<"Student number: ";
    cin>>n;

    Student s[n];

    for(int i=0; i<n; i++)
    {
        cout<<"Student "<<i+1<<" : "<<endl;

        cout<<"ID = "<<endl;
        cin>>s[i].id;

        cout<<"First Name = ";
        cin>>s[i].name.first;

        cout<<"Last Name = ";
        cin>>s[i].name.last;

        cout<<"Mark = ";
        cin>>s[i].mark;

        cout<<endl;

        calGrade(&s[i]);
    }

    cout<<"Output: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"Student "<<i+1<<endl;
        cout<<"ID = "<<s[i].id;
        cout<<"Name = "<<s[i].name.first<<" "<<s[i].name.last<<endl;
        cout<<"Mark = "<<s[i].mark<<endl;
        cout<<"Grade = "<<s[i].grade<<endl;
    }

    return 0;

    
    
}*/

/*struct SV
{
    char ch;
    int n;
    string str;
};

union UV
{
    char ch;
    int n;
    char str[20];
};

int main()
{
    int s_size=sizeof(SV), u_size=sizeof(UV);

    cout<<"Size of Structure = "<<s_size<<endl;
    cout<<"Size of Union = "<<u_size<<endl;

    return 0;

    
}*/

/*union UV
{
    char ch;
    int a;
    int b;
};

int main()
{
    UV uni;
    uni.ch='S';
    cout<<"ch = "<<uni.ch<<endl;
    cout<<"a = "<<uni.a<<endl;


    uni.a=33;
    cout<<"ch = "<<uni.ch<<endl;
    cout<<"a = "<<uni.a<<endl;

    uni.b=67;
    cout<<"ch = "<<uni.ch<<endl;
    cout<<"a = "<<uni.a<<endl;
    cout<<"b = "<<uni.b<<endl;

    return 0;
}*/

struct s1
{
    int n;
    double d;
    char c;
};

struct s2
{
    char c;
    int n;
    double d;
};

int main()
{
    cout<<"char size = "<<sizeof(char)<<" bytes"<<endl;
    cout<<"int size = "<<sizeof(int)<<" bytes"<<endl;
    cout<<"double size = "<<sizeof(double)<<" bytes"<<endl;

    cout<<"s1 size = "<<sizeof(s1)<<" bytes"<<endl;
    cout<<"s2 size = "<<sizeof(s2)<<" bytes"<<endl;

    return 0;


}