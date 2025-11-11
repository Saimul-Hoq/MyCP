#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

bool check_kth_bit_on_or_off(int n, int k)
{
    return (n>>k)&1;
}

void print_on_and_off_bits(int n)
{
    for(int k=7; k>=0; k--)
    {
        cout<<check_kth_bit_on_or_off(n, k)<<" ";
    }
    cout<<endl;
}

int turn_on_kth_bit(int n, int k)
{
    return (1<<k)|n;
}

int turn_off_kth_bit(int n, int k)
{
    return (~(1<<k))&n;
}

int toggle_kth_bit(int n, int k)
{
    return (1<<k)^n;
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // int a,b;
    // cin>>a>>b;
    // //int ans = (a&b);

    // //Bitwise AND:
    // cout<<"AND = "<<(a&b)<<endl;

    // //Bitwise OR:
    // cout<<"OR = "<<(a|b)<<endl;

    // //Bitwise XOR:
    // cout<<"XOR = "<<(a^b)<<endl;

    // cout<<"2^45 = "<<(1LL<<45)<<endl;

    cout<<check_kth_bit_on_or_off(45, 4)<<endl;

    print_on_and_off_bits(45);

    cout<<turn_on_kth_bit(45,4)<<endl;

    cout<<turn_off_kth_bit(45, 3)<<endl;

    cout<<toggle_kth_bit(45, 2)<<endl;
    
    return 0;
}