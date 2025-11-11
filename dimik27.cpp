#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int num, number, anum=0;
        cin>>num;
        number = num;

        for(int i=0; i<=2; i++)
        {
            int temp = (num/pow(10,i));
            temp = temp%10;
            anum = anum + pow(temp, 3);
            
        }

        if(anum == num)
        {
            cout<<num<<" is an armstrong number!"<<endl;
        }
        else
        {
            cout<<num<<" is not an armstrong number!"<<endl;

        }

    }

    return 0;
}

