#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

struct Hurdle
{
    int l;
    int r;
};

struct powerUp
{
    int x;
    int v;
};


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, m, l;

        cin>>n>>m>>l;

        Hurdle h[n+1];
        powerUp p[m];
        h[0].l=0;
        h[0].r=0;

        for(int i=1; i<n+1; i++)
        {
            cin>>h[i].l;
            cin>>h[i].r;
        }

        for(int i=0; i<m; i++)
        {
            cin>>p[i].x;
            cin>>p[i].v;
        }

        int power=1, j=0, count=0, cnt=0, i, s, num, *arr, check=0;
        arr = (int *)malloc(sizeof(int)*1);

        for(i=1; i<=n; i++)
        {
            num = h[i].r - h[i].l + 1;
            
            while(p[j].x>h[i-1].r && p[j].x<h[i].l)
            {
                cnt++;
                arr = (int *)realloc(arr, sizeof(int)*cnt);
                arr[cnt-1]=p[j].v;
                j++;

            }

            for(int i=0; i<cnt-1; i++)
            {
                for(int j=i+1; j<cnt; j++)
                {
                    if(arr[i]<arr[j])
                    {
                        swap(arr[i], arr[j]);
                    }
                }
            }

            for(s=0; s<cnt && power<=num; s++)
            {
                power+=arr[s];
                count++;
            }

            if(power<=num)
            {
                cout<<"-1"<<endl;
                check=1;
                break;
            }

            while(p[j].x<=h[i].r)
            {
                j++;
            }
        }

        if(check==0)
        {
            cout<<count<<endl;

        }
        

    }


    return 0;
}