#include<iostream>
using namespace std;
#define endl "\n"

int main()
{
    int t;
    cin>>t;
    

    while(t--)
    {
        string line1, line2;
        cin>>line1>>line2;

        int p, q, count=0;
        for(int i=0; i<line1.length(); i++)
        {
            if(line1[i]==line2[0])
            {
                
                for(p=i, q=0; q<line2.length() && line1[p]==line2[q]; p++, q++);

                if(q==line2.length())
                {
                    count++;
                }

            }
        }

        cout<<count<<endl;

       
    }

    return 0;
}