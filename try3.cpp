#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size(), count=0, sum=0, dec;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(s[i] < s[j])
            {
                swap(s[i] , s[j]);
            }
        }
    }
    int i=0;
    for(int j=i+1; j<n; j++)
    {
        if(s[i]==s[j])
        {
            count++;
        }
        else
        {
            sum+=count;
            i=j;
            count=0;
        }
    }

    if(count>0)
    {
        sum+=count;
    }

    dec=n-sum;

    if(dec%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;


}