#include<iostream>
using namespace std;
#define endl "\n"

int main()
{
    int t;
    cin>>t;

    




    for(int g=0; g<t; g++)
    {
        int n, templat[200001], temp[200001];
        int m;
        string str[200001];
        
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>templat[i];
        }
        cin>>m;
        for(int i=0; i<m; i++)
        {
            cin>>str[i];
        }
        
        for(int p=0; p<m; p++)
        {
            
            
            string s=str[p];
            if(s.length()!=n)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                int check=0;       
                int size=s.length(), i;
                for(i=0; i<size-1; i++)
                {
                    for(int j=i+1; j<size; j++)
                    {
                        if((s[j]==s[i]) && (templat[i]!=templat[j]))
                        {
                            check=1;
                            break;
                            
                        }
                        if(templat[j]==templat[i] && s[j]!=s[i])
                        {
                            check=1;
                            break;
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
                else
                {
                    cout<<"NO"<<endl;

                }

            }
        }

        
    

    }

    return 0;

        
}