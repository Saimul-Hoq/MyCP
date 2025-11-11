#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

/*int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int p,q,c;
        cin>>p>>q>>c;
        

        int result,cnt=1;
        int limit = p%c;
        result = (limit*p)%c;

        if(result!=limit)
        {
            while(result!=limit && cnt<=q)
            {
                result = (result*p)%c;
                cnt++;
            }

            result=1;
            if(q%cnt==0)
            {
                for(int i=1; i<=cnt; i++)
                {
                    result = (result*p)%c;
                }
            }
            else
            {
                for(int i=1; i<=(q%cnt); i++)
                {
                    result = (result*p)%c;
                }
            }
        }
        

        cout<<"Result = "<<result<<endl;
       
    }

    return 0;
}*/

