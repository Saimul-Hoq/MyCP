#include<iostream>
#include<string>
using namespace std;
#define endl "\n"


/*void recurse()
{
    string s="Hurray!  I'm learning recursion.";
    cout<<s<<endl;
    recurse();
}


int main()
{
    recurse();
    return 0;
}*/

/*void recurse(int count)
{
    if(count== 5)
    {
        return;
    }
    cout<<"I am learning recursion."<<endl;
    recurse(count+1);
    return;
}

int main()
{
    recurse(1);

    return 0;
}*/

/*void recurse(int count)
{
    if(count>5)
    {
        return;
    }
    cout<<"Cnt = "<<count<<endl;
    recurse(count+1);
    cout<<"Count = "<<count<<endl;
}

int main()
{
    recurse(1);
    return 0;
}*/

/*void recurse()
{
    static int count = 1;
    if(count>5)
    {
        return;
    }
    cout<<"Count = "<<count<<endl;
    count++;
    recurse();
}

int main()
{
    recurse();

    return 0;
}*/

//Factorial:
/*int fcall;
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }

    fcall++;
    return n*factorial(n-1);
    
}

int main()
{
    int n;
    cin>>n;

    if(n<0)
    {
        cout<<"Undefined."<<endl;
    }
    else
    {
        cout<<"Factorial of "<<n<<" is = "<<factorial(n)<<endl;
        cout<<"Fcall = "<<fcall<<endl;
    }

    return 0;
}*/

// Finonacci:

/*int fibo(int n)
{
    if(n==1 || n==2)
    {
        return 1;
    }

    return fibo(n-1) + fibo(n-2);
}

int main()
{
    int n;
    cin>>n;

    cout<<"Fibonacci = "<<fibo(n)<<endl;

    return 0;
}*/

/*int arr[50];

int fibo(int n)
{
    if(arr[n]!=0)
    {
        return arr[n];
    }

    arr[n]=fibo(n-1)+fibo(n-2);

    return arr[n];
}

int main()
{
    int n;
    cin>>n;

    arr[1]=1;
    arr[2]=1;

    string s;

    if(n==1)
    {
        s="st";
    }
    else if(n==2)
    {
        s="nd";
    }
    else if(n==3)
    {
        s="rd";
    }
    else
    {
        s="th";
    }

    cout<<n<<s<<" Fibonacci number is = "<<fibo(n)<<endl;

    for(int i=1; i<=n; i++)
    {
        cout<<"Fibo "<<i<<" = "<<arr[i]<<endl;
    }
}*/

/*int sum=0;

void summation(int n)
{
    if(n==0)
    {
        return;
    }

    summation(n-1);
    sum+=n;
}

int main()
{
    int n;
    cin>>n;

    summation(n);
    cout<<"Sum = "<<sum<<endl;
    return 0;
}*/


string s;
void rev(int size)
{
    size--;
    if(size<0)
    {
        return;
    }

    cout<<s[size];
       
    rev(size);
}

int main()
{
    cin>>s;

    int size=s.length();
    rev(size);
    return 0;
}

