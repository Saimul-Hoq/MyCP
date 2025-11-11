#include<iostream>
using namespace std;
int main()

{
    int n, a=0, b=0, count=0;
    cin>>n;
    int test[3];
    for(int i=0; i<n; i++)
    {
        
        for(int j=0; j<3; j++)
        {
            cin>>test[j];

        }
        for(int j=0; j<3; j++)
        {
            if(test[j]==1)

            {
                a++;
            }
            if(a==2)
            {
                b=1;
            }
        } 
        a=0;
        count=count+b;
        b=0;
        
    }
    cout<<count;
}