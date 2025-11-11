#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int x = time(0);
    srand(x);
    for(int i=0; i<99; i++)
    {
        cout<<rand()%11<<" ";
    }
    cout<<endl;
    return 0;
}