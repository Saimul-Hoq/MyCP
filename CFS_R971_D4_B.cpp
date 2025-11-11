#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, count=0;;
        cin>>n;
        char arr[n][4];


         
        for(int r=0; r<n; r++)
        {
            for(int c=0; c<4; c++)
            {
                cin>>arr[r][c];
            }
        }
        

       
    
        
        for(int r=n-1; r>=0; r--)
        {
            for(int c=3; c>=0; c--)
            {
                if(arr[r][c]=='#')
                {
                    count++;
                    if(count!=1)
                    {
                        cout<<" ";
                    }
                    cout<<c+1;

                    
                }
            }
        }
        cout<<endl;
        

        



        
    }

    return 0;
}