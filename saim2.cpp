#include<iostream>
using namespace std;
class book
{
    public:
    string title,author;
    int publication_year;
};

void input_function(book &b)
{
    cout<<"Enter Title name= ";
    getline(cin,b.title);
    cout<<"Enter Author name= ";
    getline(cin,b.author);
    cout<<"Enter Publication year= ";
    cin>>b.publication_year;
}

void displayBookDetails(book &c)
{
    cout<<"Title= "<<c.title<<endl;
    cout<<"Author= "<<c.author<<endl;
    cout<<"Publication year= "<<c.publication_year<<endl;
    
}

int main()
{
    book obj1;
    input_function(obj1);
    displayBookDetails(obj1);

    return 0;
}
