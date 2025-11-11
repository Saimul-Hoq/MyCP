#include<iostream>
using namespace std;

int main()
{    
    int n;
    cin>>n;
    string str;
    getline(cin, str);
    int sum=0, count=0;

    for(int i=0; i<n; i++)
    {
        getline(cin,str);

        for(int i=0; i<str.length(); i++)
        {
            if(str[i]==' ')
            {
                sum+=count;
                count=0;
            }
            else
            {
                count=1;
            }
        }
        
        if(count==1)
        {
            sum+=count;
        }
        cout<<sum<<endl;
        sum=0;
    }   

    return 0;
}