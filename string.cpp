#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    /*string str;
    cin>>str;
    cout<<str;*/

    /*string str1(5, 's');
    cout<<str1<<endl;*/

    /*int n;
    char p;
    cin>>n>>p;
    string str2(n, p);
    cout<<str2<<endl;*/

   /*int n, s;
    cin>>n>>s;
    string str3(n, s);
    cout<<str3<<endl; */

    /*string str;
    cout<<"Enter any sentence: ";
    getline(cin, str);
    cout<<str<<endl;*/

    //append-1:
    /*string s1="Saimul ", s2="Hoque";
    s1.append(s2);
    cout<<s1<<endl;*/

    //Append-2:
   /* string s1, s2;
    cin>>s1>>s2;
    cout<<s1+s2<<endl; */

    //ACCESS: 
    /*string str= "Hello     Saimul Hoque";
    str[6] = 'M';
    str[7] = 'r';
    str[8] = '.';
    cout<<str[8]<<endl;
    cout<<str<<endl;*/

    //CLEAR:
    /*string str = "onfeorfoeoie eiorjfhei o3irhf";
    str.clear();
    cout<<str<<"\n"; */

    //COMPARE:
    /*string s1="ABc", s2="Abc";
    cout<<s1.compare(s2)<<endl;*/
     /*string s1, s2;
    cin>>s1>>s2;
    if(s1.compare(s2)==0)
    {
        cout<<"The strings are uqual"<<endl;
    }
    else if(s1.compare(s2)==1)
    {
        cout<<"First string is greater."<<endl;
    }
    else if(s1.compare(s2)==-1)
    {
        cout<<"2nd string is greater."<<endl;
    }*/

    //EMPTY:
    /*string str="abc";
    cout<<str<<endl;
    str.clear();
    if(!str.empty())
    {
        cout<<"The string is not empty. "<<endl;
    }
    else
    {
        cout<<"String is empty"<<endl;
    }*/

    //ERASE:
    /*string str="My name is Saimul Hoque.";
    str.erase(0, 11);
    cout<<str<<endl;*/

    //FIND:
    /*string str= "My name is Saimul Hoque";
    cout<<str.find("S")<<endl;*/

    //INSERT:
    /*string str = "My name is";
    str.insert(10, " Saimul Hoque");
    cout<<str<<endl;*/

    //SIZE:
    /*string str = "My name is Saimul Hoque";
    cout<<str.length()<<endl;
    cout<<str.size()<<endl;*/
    /*string str = "Saimul Hoque";
    for(int i=0; i<str.size(); i++)
    {
        cout<<str[i]<<endl;
    }*/

    //SUB STRING:
    /*string str = "Saimul Hoque";
    cout<<"My nicklname: "<<str.substr(0, 4)<<endl;*/

    // STRING TO INT:
    /*string s = "1234";
    cout<<stoi(s)+1<<endl;*/

    //INT to STRING:
    /*int n=1234;
    cout<<to_string(n)<<endl;
    cout<<to_string(n).append("5")<<endl;
    cout<<to_string(n) + "5"<<endl;*/

    //SORTING:[#include<algorithm>]
    string s = "nviuherihveirhfierhvierhf8ergfoleprvijuh";
    sort(s.begin(), s.end());
    cout<<s<<endl;
    
    
    return 0;

}