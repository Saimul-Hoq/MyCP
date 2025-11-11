#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
	int n;
	cin>>n;
	map<int,int, greater<>>mp;
	for(int i=1; i<=n; i++)
	{
		int val;
		cin>>val;
		mp[val]++;
	}
	ll sum=0;
	int count=0;
	vector<int>v;
	for(auto [val, freq]: mp)
	{
		
		if(freq%2==0)
		{
			sum+=1LL*val*freq;
			mp[val]=0;
			count+=freq;
			v.push_back(val);
		}
		else
		{
			sum = sum + 1LL*val*freq - val;
			mp[val]=1;
			count+=(freq-1);
		}
	}
	if(sum==0)
	{
		cout<<0<<endl;
	}
	else
	{
		for(int val: v)
		{
			mp.erase(val);
		}
		
		ll sum1=sum, sum2=sum;
		for(auto [val, f]: mp)
		{
			if(f!=0 && val<sum)
			{
				sum1+=val;
				break;
			}
		}
		
		auto i = mp.begin();
		auto j = i;
		j++;
		for(; j!=mp.end() && i!=mp.end(); i++, j++)
		{
			if((i->first - j->first)<sum)
			{
				sum2 = sum + i->first + j->first;
				break;
			}
		}

		ll ans=max(sum1, sum2);
		if(count==2 && ans==sum) cout<<0<<endl;
		else cout<<ans<<endl;
	}
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



































// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// const ll _=5e5+5;
// ll N,n,x,k,s,i;
// set<ll>a;
// void P(){
// 	cin>>n;
//     s=k=0;
//     a.clear();
// 	for(i=0;i<n;i++){
// 		cin>>x;
// 		if(a.count(x))
//         {
//             a.erase(x),k+=x;
//         }
// 		else 
//         {
//             a.insert(x);
//         }
// 	}
// 	k<<=1;
//     s=(n-a.size()>2?k:0);
//     x=-1e18;
// 	for(ll y:a)
//     {
// 		if(k+x>y)s=max(s,k+x+y);

// 		if(k>y)s=max(s,k+y);

// 		x=y;
// 	}
// 	cout<<s<<'\n';
// }

// int main()
// {
// 	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// 	cin>>N;
//     while(N--) P();
// }