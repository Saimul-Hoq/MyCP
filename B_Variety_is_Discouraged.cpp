#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        vector<vector<int> > index_arr(n+1);
        vector<int> count_arr(n+1, 0);
        
        int max_count=-1;

        for(int i=0; i<n; i++)
        {
            int a=arr[i];

            index_arr[a].push_back(i);
            count_arr[a]++;
            if(count_arr[a]>max_count)
            {
                max_count=count_arr[a];
            }
        }
        int l, r;
        int max_dif=0;
        for(int i=0; i<n; i++)
        {
            
            if(count_arr[i]==max_count)
            {
                for(int j=0, k=1; k<index_arr[i].size(); j++, k++)
                {
                    int dif = abs(index_arr[i][j]-index_arr[i][k]);
                    if(dif>max_dif)
                    {
                        max_dif=dif;
                        l=index_arr[i][j]+2;
                        r=index_arr[i][k];
                    }

                }
            }
        }

        if(n==1)
        {
            cout<<1<<" "<<1<<endl;
        }
        else if(max_dif==1)
        {
            cout<<0<<endl;
        }
        else if(max_dif==0)
        {
            cout<<1<<" "<<n<<endl;
        }
        else
        {
            cout<<l<<" "<<r<<endl;
        }




    }
    
    return 0;
}