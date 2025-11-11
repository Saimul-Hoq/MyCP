#include<iostream>
using namespace std;
int main()
{
    int initial, final, elm, count=0, k=0;
    cout<<"Enter your range: ";
    cin>>initial>>final;
    elm = (final - initial) + 1;
    int arr[elm], prime[elm], i=0;

   while(initial<=final)
    {
        arr[i]=initial;
        initial++;
        i++;
    }
    for(int i=0; i<elm; i++)
    {
        if(arr[i]>1)
        {
            for(int div=2; div<arr[i]; div++)
            {
                if(arr[i]%div==0)
                {
                    count=1;
                }
            }
            if(count==0)
            {
                prime[k]=arr[i];
                k++;
            }
            
            count=0;
        }
    }

    cout<<"Total prime numbers: "<<k<<endl;
    cout<<"The prime numbers are: ";
    for(int i=0; i<k; i++)
    {
        cout<<prime[i]<<" ";
    }
    return 0;
}