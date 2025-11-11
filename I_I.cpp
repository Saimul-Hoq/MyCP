#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;



int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int num;
        cin>>num;
        vector<pair<string,int>>arr;
        arr.push_back({"M", 1000});
        arr.push_back({"CM", 900});
        arr.push_back({"D", 500});
        arr.push_back({"CD", 400});
        arr.push_back({"C", 100});
        arr.push_back({"XC", 90});
        arr.push_back({"L", 50});
        arr.push_back({"XL", 40});
        arr.push_back({"X", 10});
        arr.push_back({"IX", 9});
        arr.push_back({"V", 5});
        arr.push_back({"IV", 4});
        arr.push_back({"I", 1});
        string ans="";
        
        for(auto [ch, val]: arr)
        {
            if(val<=num)
            {
                int div = num/val;
                num-=(div*val);
                while(div--)
                {
                    ans = ans + ch;
                }
            }
        }

        cout<<ans<<endl;
        
    }

    
    
    return 0;
}