#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    //INITIALIZATION:
    //_______________________________________________________________________________________
    //vector<int>v;


    // vector<int>v(10);
    // for(int i=0; i<10; i++)
    // {
    //     cin>>v[i];
    // }
    // for(int i=0; i<10; i++)
    // {
    //     cout<<v[i]<<" ";
    // }

    //vector<int>v(10, 3);
    // for(int i=0; i<10; i++)
    // {
    //     cout<<v[i]<<" ";
    // }

    // vector<int>v2(v);
    // for(int i=0; i<10; i++)
    // {
    //       cout<<v2[i]<<" ";
    // }

    // int arr[]={1, 2, 3, 4, 5};
    // vector<int>v(arr+1, arr+4);
    // for(int i=0; i<v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }



    // cout<<endl<<v.size()<<endl;

    //Capacity Function:
    //_____________________________________________________________________________

    // vector<int>v;
    // cout<<v.size()<<endl;
    // v.resize(5);
    // cout<<v.size()<<endl;
    // v.resize(10, 15);
    // cout<<v.size()<<endl;
    // for(int i=0; i<v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // v.resize(8, 33);
    // for(int i=0; i<v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // v.clear();
    // cout<<v.size()<<endl;
    
    //Modifiers:
    // ______________________________________________________________________________________
    // int arr[] = {1, 2, 3, 4, 5, 6 , 7, 8, 9, 10};
    // int carr[] = {100, 200, 300};
    // vector<int> v(arr, arr+10);
    // vector<int> v2(carr, carr+3);

    // cout<<v.size()<<endl;
    // v.pop_back();
    // cout<<v.size()<<endl;
    // for(int i: v)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // v.push_back(10);
    // cout<<v.size()<<endl;
    // for(int i: v)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // v2.insert(v2.end(), 400);
    // cout<<v2.size()<<endl;
    // for(int i: v2)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // v2.pop_back();
    // v2.insert(v2.end(), 3, 500);
    // cout<<v2.size()<<endl;
    // for(int i: v2)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // v.insert(v.begin()+3, carr, carr+3);
    // for(int i: v)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // v.erase(v.begin()+3);
    // for(int i: v)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // v.erase(v.begin()+3, v.begin()+5);
    // for(int i: v)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // v.erase(v.begin()+1, v.end()-1);
    // for(int i: v)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    
    // int arr[]={1,2,3,2,4,2,5,2};
    // vector<int>v(arr, arr+8);
    // for(int i: v)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // replace(v.begin(), v.end(), 2, 300);
    // for(int i: v)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // auto it = find(v.begin(), v.end(), 500);
    // if(it==v.end())
    // {
    //     cout<<"Not Found"<<endl;
    // }
    // else
    // {
    //     cout<<"Found"<<endl;
    // }

    int n;
    cin>>n;
    cin.ignore();

    vector<string>v;

    for(int i=0; i<n; i++)
    {
        string s;
        getline(cin, s);
        v.push_back(s);

    }

    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<endl;
    }



    return 0;
}