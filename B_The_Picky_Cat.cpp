#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        deque<int>arr(n);
        deque<int>narr(n);

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            narr[i] = arr[i];
        }
        int key = arr[0];
        sort(arr.begin(), arr.end());
        narr[0]*=(-1);
        sort(narr.begin(), narr.end());
        int ai = n/2;
        if(n%2==0)
        {
            ai--;
        }
        int ci;
        for(int i=0; i<n; i++)
        {
            if(arr[i]==key)
            {
                ci = i;
                break;
            }
        }
        bool check1=false;
        if(ai==ci)
        {
            check1 = true;
        }
        else
        {
            if(ai<ci)
            {
                while(!arr.empty())
                {
                    int num = arr[0];
                    arr.pop_front();
                    num*=(-1);
                    if(num>key)
                    {
                        ci--;
                    }
                    else
                    {
                        break;
                    }
                    if(ci==ai)
                    {
                        check1=true;
                        break;
                    }
                }
            }
            else
            {
                while(!arr.empty())
                {
                    int num = arr.back();
                    arr.pop_back();
                    num*=(-1);
                    if(num<key)
                    {
                        ci++;
                    }
                    else
                    {
                        break;
                    }
                    if(ci==ai)
                    {
                        check1=true;
                        break;
                    }
                }
            }
        }
        if(check1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            key*=(-1);
            for(int i=0; i<n; i++)
            {
                if(narr[i]==key)
                {
                    ci = i;
                    break;
                }
            }
            bool check2=false;
            if(ai==ci)
            {
                check2 = true;
            }
            else
            {
                if(ai<ci)
                {
                    while(!narr.empty())
                    {
                        int num = narr[0];
                        narr.pop_front();
                        num*=(-1);
                        if(num>key)
                        {
                            ci--;
                        }
                        else
                        {
                            break;
                        }
                        if(ci==ai)
                        {
                            check2=true;
                            break;
                        }
                    }
                }
                else
                {
                    while(!narr.empty())
                    {
                        int num = narr.back();
                        narr.pop_back();
                        num*=(-1);
                        if(num<key)
                        {
                            ci++;
                        }
                        else
                        {
                            break;
                        }
                        if(ci==ai)
                        {
                            check2=true;
                            break;
                        }
                    }
                }
            }

            if(check2)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }


    }
    
    
    
    return 0;
}