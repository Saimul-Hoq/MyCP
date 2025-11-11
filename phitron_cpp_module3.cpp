#include<bits/stdc++.h>
using namespace std;

// class Student
// {
//     public:
//     string name;
//     int roll;
//     double cgpa;

//     Student(string name, int roll, double cgpa)
//     {
//         this->name=name;
//         this->roll=roll;
//         (*this).cgpa=cgpa;
//     }
// };

// Student* fun()
// {
//     Student *saim = new Student("saim", 2, 3.98);

//     return saim;
// }

// int main()
// {
//     //Student saim("saim", 2, 3.98);
//     Student *saim = fun();
//     Student foysal("foysal", 1, 3.90);

//     cout<<saim->name<<" "<<saim->roll<<" "<<saim->cgpa<<endl;
//     cout<<foysal.name<<" "<<foysal.roll<<" "<<foysal.cgpa<<endl;

//     return 0;

// }

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    //sort(arr, arr+n); //ascending order
    sort(arr, arr+n, greater<int>());  //descending order

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}