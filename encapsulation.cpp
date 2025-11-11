#include<iostream>
using namespace std;

class company
{
    private:
    int salary;

    public:
    void totalsalary(int fulltime, int halftime)
    {
        salary = fulltime+halftime;
        

    }

    int getsalary()
    {
        return salary;
    }


};

int main()
{
    company n1;
    n1.totalsalary(30000, 6000);
    cout<<"Total Salary: "<<n1.getsalary()<<endl;

    return 0;
    
}