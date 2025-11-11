#include<iostream>
using namespace std;

int main()
{
    
    cout<<"   |   |   "<<endl;
    cout<<"-----------"<<endl;
    cout<<"   |   |   "<<endl;
    cout<<"-----------"<<endl;
    cout<<"   |   |   "<<endl;

    int row, col;
    for(int i=1; i<=9; i++)
    {
        if(i%2==1)
        {
            cout<<"Action of X"<<endl;
        }
        else
        {
            cout<<"Action of O"<<endl;
        }

        cout<<"Row = ";
        cin>>row;
        cout<<"Column = ";
        cin>>col;
        if(row==0 && col==0)
        {
            cout<<" X |   |   "<<endl;
            cout<<"-----------"<<endl;
            cout<<"   |   |   "<<endl;
            cout<<"-----------"<<endl;
            cout<<"   |   |   "<<endl;
        }
        else if(row==0 && col==1)
        {
            cout<<"   | X |   "<<endl;
            cout<<"-----------"<<endl;
            cout<<"   |   |   "<<endl;
            cout<<"-----------"<<endl;
            cout<<"   |   |   "<<endl;
        }
        else if(row==0 && col==2)
        {
            cout<<"   |   | X "<<endl;
            cout<<"-----------"<<endl;
            cout<<"   |   |   "<<endl;
            cout<<"-----------"<<endl;
            cout<<"   |   |   "<<endl;
        }
        else if(row==1 && col==0)
        {
            cout<<"   |   |   "<<endl;
            cout<<"-----------"<<endl;
            cout<<" X |   |   "<<endl;
            cout<<"-----------"<<endl;
            cout<<"   |   |   "<<endl;
        }
        else if(row==0 && col==1)
        {
            cout<<"   | X |   "<<endl;
            cout<<"-----------"<<endl;
            cout<<"   |   |   "<<endl;
            cout<<"-----------"<<endl;
            cout<<"   |   |   "<<endl;
        }
        else if(row==0 && col==1)
        {
            cout<<"   | X |   "<<endl;
            cout<<"-----------"<<endl;
            cout<<"   |   |   "<<endl;
            cout<<"-----------"<<endl;
            cout<<"   |   |   "<<endl;
        }
        else if(row==0 && col==1)
        {
            cout<<"   | X |   "<<endl;
            cout<<"-----------"<<endl;
            cout<<"   |   |   "<<endl;
            cout<<"-----------"<<endl;
            cout<<"   |   |   "<<endl;
        }
        else if(row==0 && col==1)
        {
            cout<<"   | X |   "<<endl;
            cout<<"-----------"<<endl;
            cout<<"   |   |   "<<endl;
            cout<<"-----------"<<endl;
            cout<<"   |   |   "<<endl;
        }
        else if(row==0 && col==1)
        {
            cout<<"   | X |   "<<endl;
            cout<<"-----------"<<endl;
            cout<<"   |   |   "<<endl;
            cout<<"-----------"<<endl;
            cout<<"   |   |   "<<endl;
        }

    }


    return 0;
    
    
}