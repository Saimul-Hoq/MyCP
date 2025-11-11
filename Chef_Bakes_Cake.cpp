#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,x,y;
	cin>>n>>x>>y;
	int p = y/x;
	int ans = ceil((n*1.0)/p);
	cout<<ans<<endl;

}
