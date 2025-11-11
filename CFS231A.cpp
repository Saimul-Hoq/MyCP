#include<iostream>
using namespace std;

int main()
{
    int t, count=0;
    cin>>t;

    while(t--)
    {
        int arr[3], sum=0;
        for(int i=0; i<3; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum>=2)
        {
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}






/*int main()
{
    int n, test[3], a=0, b=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        
        for(int j=0; j<3; j++)
        {
            cin>>test[j];
            
            if(test[j]==1)
            {
                a++;
            }
            if(a==2)
            {
                b++;
            }
            a=0;
        }
    }
    cout<<b;
}*/