#include<iostream>
using namespace std;

struct student
{
    
    string name;
    int age;
};

int main()
{
    student a;
    cout<<"Enter name: ";
    getline(cin,a.name);
    cout<<"Enter Age: ";
    cin>>a.age;

    cout<<"Name= "<<a.name<<endl;
    cout<<"Age= "<<a.age<<endl;

    return 0;

}
