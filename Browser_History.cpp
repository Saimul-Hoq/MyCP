#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<string>l;

    string str;
    while(1)
    {
        cin>>str;
        if(str=="end")
        {
            break;
        }
        l.push_back(str);
    }
    auto base = l.begin();
    int q;
    cin>>q;
    cin.ignore();
    while(q--)
    {
        string s, word;
        getline(cin, s);

        stringstream ss(s);

        
        

        ss>>word;
        if(word=="visit")
        {
            ss>>word;
            auto check = find(l.begin(), l.end(), word);
            if(check!=l.end())
            {
                cout<<*check<<endl;
                base = check;
            }
            else
            {
                cout<<"Not Available"<<endl;
            }
            
        }
        else if(s=="prev")
        {
            if(base==l.begin())
            {
                cout<<"Not Available"<<endl;
            }
            else
            {
                auto check =  next(base, -1);
                cout<<*check<<endl;
                base=check;
            }
            
        }
        else if(s=="next")
        {
            auto check = next(base, 1);
            if(check==l.end())
            {
                cout<<"Not Available"<<endl;
            }
            else
            {
                cout<<*check<<endl;
                base=check;
            }
        }

    }
    
    
    return 0;
}