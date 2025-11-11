#include<iostream>
using namespace std;

class student
{
    public:
    string name, gender;
    int age;
};

/*int main()
{
    student a;
    a.name="Saim";
    a.age=21;
    a.gender="Male";

    return 0;
}*/

void print()

int main()
{
    int n;
    cout<<"Students: ";
    cin>>n;

    student arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i].name>>arr[i].age>>arr[i].gender;

    }

}