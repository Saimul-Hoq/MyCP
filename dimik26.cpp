#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        double food; 
        cin>>food;
        int days=0;

        while(food>1.0)
        {
            days++;
            food = food/2.0;
        }

        cout<<days<<" days"<<endl;
    }

    return 0;
}