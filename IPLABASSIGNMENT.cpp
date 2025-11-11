#include <iostream>
using namespace std;
class Book{
public:
    string title;
    string author;
    int publicationyear;
};

   void book(Book &b1){
        cout<<"Enter the book details: "<<endl;
        cout<<"Title of the Book: ";
        getline(cin,b1.title);
        cout<<"Author name of the Book: ";
        getline(cin,b1.author);
        cout<<"Year of publication: ";
        cin>>b1.publicationyear ;
}

    void displayBookDetails(Book &b1){
        cout<<"Title: "<<b1.title<<endl;
        cout<<"Author: "<<b1.author<<endl;
        cout<<"Publication year: "<<b1.publicationyear<<endl;
    }

int main()
{
    Book b1;

    book(b1);
    displayBookDetails(b1);

    return 0;


}
