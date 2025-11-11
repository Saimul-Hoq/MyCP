#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
    int t;
    cin>>t;
    int perfect[] = {6,28,496,8128,33550336};

    while(t--)
    {
        int n;
        cin>>n;

        //****************
        for(int i=0; i<5; i++)
        {
            if(perfect[i]<=n)
            {
                cout<<perfect[i]<<endl;
            }
            else
            {
                break;
            }
        }

        cout<<endl;

    }

    return 0;
}


















































/*int main()
{
    
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int size = 40000001;
    int perfect[100], k=0, sum;

    for(int num=6; num<size; num++)
    {
        cout<<num<<endl;
        sum=1;
        for(int i=2; i<=sqrt(num); i++)
        {
            if(num%i==0)
            {
                sum = sum + i + num/i;
            }
            
        }

        if(num == sum)
        {
            perfect[k]=num;
            k++;
        }
    }

    for(int i=0; i<k; i++)
    {
        cout<<perfect[i]<<" ";
    }

    return 0;
}*/