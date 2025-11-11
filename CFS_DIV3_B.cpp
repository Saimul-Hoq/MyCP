#include<iostream>
using namespace std;
#define endl "\n"

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, seat[200001], occpi[200001];
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>seat[i];
            occpi[i]=0;
        }

        int sit=seat[0]-1, i;
        occpi[sit]=1;

        for(i=1; i<n; i++)
        {
            sit=seat[i]-1;
            if(sit==0 && occpi[sit+1]==1)
            {
                occpi[sit]=1;         

            }
            else if(sit==n-1 && occpi[sit-1]==1)
            {
                occpi[sit]=1;         

            }
            else if((sit>0 && sit<n-1)  &&    (occpi[sit-1]==1 || occpi[sit+1]==1))
            {
                occpi[sit]=1;         
            }
            else
            {
                cout<<"NO"<<endl;
                break;
            }
        }
        if(i==n)
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}