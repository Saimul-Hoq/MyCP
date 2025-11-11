#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;

void decryption()
{
    unsigned long long num;
    cout<<endl<<"Enter encrypted messeage: ";
    cin>>num;

    unsigned long long num2=num; 
    unsigned long long cnt, div;

    for(cnt=0; num2>0; cnt++)
    {
        num2=num2/10;
        
    }
    
    char ch[cnt/3];
    unsigned long long p=cnt-3;
    div=pow(10,p);
    for(unsigned long long i=0;i<(cnt/3) ;i++)
    {
        ch[i]=((num/div)%1000)/3;
        p=p-3;
        div=pow(10,p);
    }
    cout<<"Decrypted: "<<endl;
    for(unsigned long long i=0; i<(cnt/3); i++)
    {
        cout<<ch[i];
    }
}

void encryption()
{
    string str;
    cout<<"Enter messeage: ";
    getline(cin, str);

    int arr[str.length()];

    for(int i=0; i<str.length(); i++)
    {
        arr[i]=str[i];
        arr[i]=arr[i]*3;
    }
    cout<<"Encrypted: "<<endl;
    for(int i=0; i<str.length(); i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
}



int main()
{
    encryption();
    decryption();
    return 0;


}