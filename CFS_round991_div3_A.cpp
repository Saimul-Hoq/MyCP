#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

class Word
{
    public:
    string s;
    int size;
};

// bool cmp(Word l, Word r)
// {
//     return (l.size < r.size);
// }

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;

        Word word[n];

        for(int i=0; i<n; i++)
        {
            cin>>word[i].s;
            word[i].size=word[i].s.size();
        }

        //sort(word, word+n, cmp);

        int count=0, sum=0;

        for(int i=0; (sum+word[i].size)<=m && i<n; i++)
        {
            sum+=word[i].size;
            count++;
        }

        cout<<count<<endl;
    }

    return 0;
}