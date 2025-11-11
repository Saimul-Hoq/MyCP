#include<iostream>
#include<math.h>
using namespace std;
#define endl "\n"

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        int root=sqrt(n), size=root, p=0, check=0;
        root=pow(root, 2);

        if(root==n)
        {
            char arr[size][size];

            for(int r=0; r<size; r++)
            {
                for(int c=0; c<size; c++)
                {
                    arr[r][c]=s[p];
                    p++;
                    if(r!=0 && r!=(size-1) && c!=0 && c!=(size-1))
                    {
                        if(arr[r][c]=='1')
                        {
                            cout<<"NO"<<endl;
                            check=1;
                            break;
                        }
                    }
                }
                if(check==1)
                {
                    break;
                }
            }

            if(check==0)
            {
                cout<<"YES"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}