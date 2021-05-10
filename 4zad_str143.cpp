#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
struct Book
{
    char title[21];
    char author[41];
    char ISBN_num[14];
    double price;
};
int main ()
{
    int n;
    double a;
    cout<<"Number of books: ";
    cin>>n;
    
    Book books[51];
    
    for(int i=0; i<n; i++)
    {
        cin.get();
        cin.getline(books[i].title, 21);
        cin.getline(books[i].author, 41);
        cin>>books[i].price;
        cin>>books[i].ISBN_num;
    }
    
    cin>>a;
    
    for(int i=0; i<n; i++)
    {
        if(books[i].price>a)
        {
            cout<<books[i].title<<" "<<books[i].author<<" "<<books[i].ISBN_num<<" "<<books[i].price;
        }
    }
    
    return 0;
}
