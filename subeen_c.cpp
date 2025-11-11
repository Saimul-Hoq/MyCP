#include<iostream>
#include<string.h>
using namespace std;

//Palindrome:
/*int palindrome_word(string str)
{
    int l=str.length();

    for(int i=0; i<l; i++)
    {
        str[i]=tolower(str[i]);
    }

    for(int i=0, j=l-1; i<l; i++,j--)
    {
        if(str[i]!=str[j])
        {
            return 0;
        }

        return 1;
    }
}

int main()
{
    string str;
    cout<<"Enter a word:";
    cin>>str;

    if(palindrome_word(str)==1)
    {
        cout<<endl<<str<<" is a Palindromic word"<<endl;
    }
    else
    {
        cout<<endl<<str<<" is NOT a Palindromic word."<<endl;
    }

    return 0;
    
}*/

//Grid Travarsal:
/*
int main()
{
    int row, col, r, c, resrow, rescol, cnt=0, n;
    cout<<"Enter the size of the grid:"<<endl;
    cout<<"Row = ";
    cin>>row;
    cout<<"Column = ";
    cin>>col;

    int grid[row][col];

    for(int r=0; r<row; r++)
    {
        for(int c=0; c<col; c++)
        {
            grid[r][c]=1;
        }
    }

    cout<<"How many areas you want to restrict:"<<endl;
    cin>>n;
    cout<<"Enter the restricted areas:"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"Row = ";
        cin>>resrow;
        cout<<"Column = ";
        cin>>rescol;
        grid[resrow][rescol]=0;
        cout<<endl;
    }

    cout<<"Enter the position of the robot:"<<endl;
    cout<<"Row = ";
    cin>>r;
    cout<<"Column = ";
    cin>>c;

    string str;
    cout<<"Enter your command = ";
    cin>>str;

    for(int i=0; i<str.length(); i++)
    {
        if(str[i]=='u')
        {
            if(grid[r-1][c]!=0)
            {
                r--;
            }
        }
        else if(str[i]=='d')
        {
            if(grid[r+1][c]!=0)
            {
                r++;
            }
        }
        else if(str[i]=='l')
        {
            if(grid[r][c-1]!=0)
            {
                c--;
            }
        }
        else if(str[i]=='r')
        {
            if(grid[r][c+1]!=0)
            {
                c++;
            }
        }
        else if(str[i]=='s')
        {
            break;
        }
        else
        {
            cout<<"Invalid input"<<endl;
            cnt=1;
            break;
        }

        if(cnt!=1)
        {
            cout<<"Position of the Robot:"<<endl;
            cout<<"Row = "<<r<<endl<<"Column = "<<c<<endl;
        }

        return 0;
            
        
        
    }
}
*/


//Encryption 1:
/*
string encrypt(string str)
{
    for(int i=0; i<str.length(); i++)
    {
        str[i]=str[i]+1;
    }

    return str;
}

string decrypt(string str)
{
    for(int i=0; i<str.length(); i++)
    {
        str[i]=str[i]-1;
    }

    return str;
}

int main()
{
    string str;
    cout<<"Enter a sentence:";
    getline(cin, str);

    str=encrypt(str);
    cout<<str<<endl;
    str=decrypt(str);
    cout<<str<<endl;

    return 0;
}
*/
/*
void encryption(string str, int enc[])
{
    for(int i=0; i<str.length(); i++)
    {
        enc[i]=str[i];
        enc[i]=enc[i]*3;
    }

}

string decryption(int enc[], int n)
{
    string str;
    for(int i=0; i<n; i++)
    {
        enc[i]=enc[i]/3;
        str[i]=enc[i];
    }

    return str;
}



int main()
{
    int decision;
    cout<<"Enter 1 for ec, 2 for dec.:";
    cin>>decision;
    string str;
    getline(cin, str);
    int n=str.length();
    int enc[n];

    if(decision==1)
    {
        
        cout<<"Enter a Sentence: ";
        getline(cin, str);
        
        
        encryption(str, enc);
        cout<<"Encrypted:"<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<enc[i];
        }
    }

    else if(decision==2)
    {
        string s= decryption(enc, n);
        cout<<"Decrypted:"<<endl;
        cout<<s<<endl;
        
    }

    return 0;
}
*/

int main()
{
    long num;
    cout<<"Enter encrypted messeage: ";
    cin>>num;

    long a=1; 
    int cnt=0;

    while(a!=0)
    {
        cnt++;
        a=num/10;
    }
    cout<<cnt;




}