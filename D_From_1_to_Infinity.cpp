#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

ll n;

ll power(ll p, ll q)
{
    if(q==0) return 1;
    ll ans=1;
    for(int k=0; k<=__lg(q); k++)
    {
        if(((q>>k)&1)==1)
        {
            ans=(ans*p);
        }
        p=(p*p);
    }

    return ans;
}

ll nod(ll num)
{
    
    ll cnt=0;
    while(num!=0)
    {
        cnt++;
        num/=10;
    }

    return cnt;
}

ll sm(ll x)
{
    return (x*(x+1))/2;
}

pair<ll,ll> isPossible(ll x)
{
    ll k = nod(x);
    k--;
    ll cnt=0;
    for(int i=0; i<k; i++)
    {
        cnt += (9*power(10,i)*(i+1));
    }
    cnt += ((x-power(10,k)+1)*(k+1));

    if(cnt<=n) return {x,cnt};
    else return {-1,-1};
}

pair<ll,ll> getX()
{
    ll l=1, r=1e15;
    pair<ll,ll>x;
    while(l<=r)
    {
        ll mid = l + (r-l)/2;
        pair<ll,ll>tmp = isPossible(mid);
        if(tmp.first != (-1))
        {
            x = tmp;
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
    }

    return x;
}


//Return the digit sum from 1 to x
ll digitSum(ll x) 
{
    ll sum = 0;
    while(1)
    {
        if(x==0) break;
        ll k = nod(x);
        ll msd = x/power(10, k-1);
        if(k==1)
        {
            sum += sm(x);
            break;
        }

        ll temp = sm(msd-1)*power(10, k-1) + 45*(k-1)*power(10, k-2)*msd;
        sum+=temp;
        x = x%power(10,k-1);
        sum+=(msd*(x+1));
    }

    return sum;
}


void saim()
{
    cin>>n;
    auto [num, spc] = getX();
    
    ll sum=digitSum(num);
    
    num++;
    string nm = to_string(num);
    spc++;
    for(ll i=0; spc<=n; i++)
    {
        sum+=(nm[i]-48);
        spc++;
    }
    cout<<sum<<endl;
     
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
   

    int t;
    cin>>t;
    while(t--)
    {
        saim();
    }
    
    
    return 0;
}