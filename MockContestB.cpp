#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a, b;
        cin>>a;
        cin>>b;
        int r=0, c=94, i, j, p, row1, col1, row2, col2, check1, check2;

        while(r<94)
        {
            check1=0;
            check2=0;
            p=33;
            r++;
            c=ceil(94.0/r);
            //char arr[r][c];
            //cout<<"1 94"<<endl;

            for(j=1; j<=c; j++)
            {
                for(i=1; i<=r; i++)
                {
                    char temp = p;
                    //cout<<temp<<endl;
                    //arr[i][j]=temp;
                    p++;
                    if(temp==a)
                    {
                        row1=i;
                        col1=j;
                        check1=1;
                    }
                    else if(temp==b)
                    {
                        row2=i;
                        col2=j;
                        check2=1;
                    }
                }
                if(p>126 || (check1=1 && check2==1))
                {
                    break;
                }
            }
            if(row1==row2)
            {
                cout<<r<<" "<<c<<endl;
            }
        }

        cout<<endl;
    }

    return 0;
}