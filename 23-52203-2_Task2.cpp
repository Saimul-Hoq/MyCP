#include<iostream>
using namespace std;
int main()
{
    string city, country;
    cout<<"Enter your city and country.";
    cin>>city>>country;
    string location= city + ',' + country;
    cout<<"Your location: "<<location<<endl;
    return 0;
}