#include<iostream>
using namespace std;

int main()
{
    int ar[26], br[26];
    for(int i=0; i<26; i++)
    {
        ar[i]=0;
        br[i]=0;
    }

    string a, b;
    cin>>a;
    cin>>b;

    int count=0; 

    for(int i=0; i<a.length(); i++)
    {
        int temp = a[i]-'a';
        ar[temp]++;
    }

    for(int i=0; i<b.length(); i++)
    {
        int temp = b[i]-'a';
        br[temp]++;
    }

    for(int i=0; i<26; i++)
    {
        if(ar[i]!=0 && br[i]!=0)
        {
            if(ar[i]<br[i])
            {
                count+=ar[i];
            }
            else
            {
                count+=br[i];

            }
        }
    }

    cout<<"Number of similar characters: "<<count<<endl;

    return 0;


}