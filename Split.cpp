#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int p = n/k;
        if(p==1)
        {
            cout<<1<<endl;
        }
        else
        {
            int ans1=INT_MAX, ans2=INT_MAX;
            int val = p;
            for(int i=1; i<n; i++)
            {
                if(s[i-1]>s[i])
                {
                    val--;
                }

                if((i+1)%p==0)
                {
                    ans1=min(ans1, val);
                    i++;
                    val=p;
                }
            }


            val = p;
            reverse(s.begin(), s.end());
            for(int i=1; i<n; i++)
            {
                if(s[i-1]<s[i])
                {
                    val--;
                }

                if((i+1)%p==0)
                {
                    ans2=min(ans2, val);
                    i++;
                    val=p;
                }
            }

            if(p*k==n)
            {
                cout<<max(ans1, ans2)<<endl;
            }
            else
            {
                reverse(s.begin(), s.end());
                p++;
                int ans3=INT_MAX, ans4=INT_MAX;
                val = p;
                for(int i=1; i<n; i++)
                {
                    if(s[i-1]>s[i])
                    {
                        val--;
                    }

                    if((i+1)%p==0)
                    {
                        ans3=min(ans3, val);
                        i++;
                        val=p;
                    }
                }


                val = p;
                reverse(s.begin(), s.end());
                for(int i=1; i<n; i++)
                {
                    if(s[i-1]<s[i])
                    {
                        val--;
                    }

                    if((i+1)%p==0)
                    {
                        ans4=min(ans4, val);
                        i++;
                        val=p;
                    }
                }

                int a = max(ans1, ans2);
                int b = max(ans3, ans4);
                cout<<min(a,b)<<endl;
            }

            
            
        }
    }

    
    
    return 0;
}