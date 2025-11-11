#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,x;
        cin>>s>>x;

        int size_s=s.size(), size_x=x.size(), p;

        for(int i=0; i<size_s; i++)
        {
            if(s[i]==x[0])
            {
                p=1;
                for(int j=i+1; p<size_x; p++, j++)
                {
                    if(s[j]!=x[p])
                    {
                        break;
                    }
                }
                if(p==size_x)
                {
                    s.replace(i, size_x, "#");
                    size_s = s.size();
                }
            }
        }

        cout<<s<<endl;
    }

    return 0;
}