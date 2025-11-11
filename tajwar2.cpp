#include<iostream>
using namespace std;
int main()
{
    int n, n1, n2, cnt=1;
    cout<<"Enter any two numbers: "<<endl;
    while(cnt<=2)
    {
        cin>>n;
        if(n==1)
            {
                cout<<"One"<<endl;
            }
            else if(n==2)
            {
                cout<<"Two"<<endl;
            }
            else if(n==3)
            {
                cout<<"Three"<<endl;
            }
            else if(n==4)
            {
                cout<<"Four"<<endl;
            }
            else if(n==5)
            {
                cout<<"Five"<<endl;
            }
            else if(n==6)
            {
                cout<<"Six"<<endl;
            }
            else if(n==7)
            {
                cout<<"Seven"<<endl;
            }
            
            else if(n==8)
            {
                cout<<"Eight"<<endl;
            }
            else
            {
                cout<<"Nine"<<endl;
            }
        
            cnt++;
    }
    return 0;
    

}