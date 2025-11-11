#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n, arr[500], sum[500], count=0, k=0, i=0;
    string s;
    cin>>n>>s;

    if(n<=1)
    {
        cout<<0<<endl;
    }
    else
    {
        for(int j=i+1; j<n; j++)
    {
        if(s[i]==s[j])
        {
            count++;
        }
        else
        {
                
            i=j;
            arr[k]=count;
            k++;
            count=0;
            
                
        }
    }
    

    arr[k]=count;
    k++;
    
    i=0;
    int j=i+1;

    if(k==1)
    {
        sum[i]=count;
        cout<<sum[i]<<endl;
    }
    else
    {
        while(j<k)
        {
            sum[i] = (arr[i] + arr[j]);
            i++;
            j++;
        }

        int p=0;

        for(int j=0; j<=i; j++)
        {
            if(sum[p]>sum[j])
            {
                p=j;
            }
        }
        cout<<sum[p]<<endl;
    }
            
    }
    
    
    
      
    return 0;

}