#include<iostream>
#include<string>
using namespace std;


int main()
{
    int n, count=0, sum=0, i=0;
    cin>>n;
    string color;
    cin>>color;

    for(int j=1; j<n; j++)
    {
        if(color[i]==color[j])
        {
            count++;
        }
        else
        {
            sum+=count;
            count=0;
            i=j;
        }
    }
    sum+=count;

    cout<<sum<<endl;

    return 0;

}












/*int main()
{
    int n, count=0, i=0, sum=0;
    string s;
    cin>>n>>s;

    for(int j=i+1; j<s.size(); j++)
    {
        if(s[i]==s[j])
        {
            count++;
        }
        else
        {
            sum+=count;
            count=0;
            i=j;
        }
    }
    sum=sum+count;

    cout<<sum<<endl;
    return 0;

}*/