#include<iostream>
using namespace std;
#define endl "\n"

int main()
{
    int t;
    cin>>t;
    string line;
    getline(cin, line);

    while(t--)
    {
        
        getline(cin, line);

        int min;
        for(int i=0; i<line.length()-1; i++)
        {
            min=i;
            for(int j=i+1; j<line.length(); j++)
            {
                if(line[min]>line[j])
                {
                    min=j;
                }
            }
            swap(line[i], line[min]);
        }

        int count=1, i=0; 
        
        while(line[i]==' ')
        {
            i++;
        }
        
        
        for(int j=i+1; j<line.length(); j++)
        {
            if(line[i]==line[j])
            {
                count++;
            }
            else
            {
                cout<<line[i]<<" = "<<count<<endl;
                count=1;
                i=j;
                
            }
        }
        cout<<line[i]<<" = "<<count<<endl;
        cout<<endl;

        
    }

    return 0;
}