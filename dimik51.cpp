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

        int index, q, p;
        for(int i=0; i<line1.length(); i++)
        {
            if(line1[i]==line2[0])
            {
                index=i;
                for(p=i, q=0; q<line2.length() && line1[p]==line2[q]; p++, q++);

                if(q==line2.length())
                {
                    break;
                }

            }
        }

        cout<<index<<endl;

       
    }

    return 0;
}