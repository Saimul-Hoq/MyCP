#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

void decryption()
{
    int arr[9999], cnt=0, count=0, k=0, sum=0, p=100;
    cout<<"Enter Encrypted message: ";
    while(cin>>arr[cnt])
    {
        cnt++;
    }

    int size=cnt/3, carr[size];
    for(int i=0; i<cnt; i++)
    {
        sum+=arr[i]*p;
        p=p/10;
        count++;
        if(count==3)
        {
            carr[k]=sum;
            sum=0;
            k++;
            p=100;
            count=0;
        }
    }

    char ch[size];
    for(int i=0; i<size; i++)
    {
        ch[i]=carr[i]/3;
    }
    cout<<"Decrypted:"<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<ch[i];
    }

}

void encryption()
{
    string str;
    cout<<"Enter messeage: ";
    getline(cin, str);
    int size=str.length();
    int arr[size], carr[size*3], k=0,p=100;

    for(int i=0; i<size; i++)
    {
        arr[i]=str[i];
        arr[i]=arr[i]*3;
    }
    cout<<"Encrypted: "<<endl;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<3; j++)
        {
            carr[k]=(arr[i]/p)%10;
            p=p/10;
            k++;
        }
        p=100;
    }

    for(int i=0; i<size*3; i++)
    {
        cout<<carr[i]<<" ";
    }

    
    cout<<endl;
}



int main()
{
    encryption();
    decryption();
    return 0;
}