#include <iostream>
#include <fstream>
using namespace std;
struct Book
{
    char title[21];
    char author[21];
    double price;
    char ISBN_num[14];
};
int main ()
{
    Book books[51];
    int n, i;
    cout<<"Enter the number of books: ";
    cin>>n;
    
    ofstream file1;
    file1.open("file_1.txt");
    
    for(int i=0; i<n; i++)
    {
        cin.get();
        cout<<"Title: ";
        cin.getline(books[i].title, 21);
        cout<<"Author: ";
        cin.getline(books[i].author, 21);
        cout<<"Price: ";
        cin>>books[i].price;
        cout<<"ISBN: ";
        cin>>books[i].ISBN_num;
        
        file1<<books[i].title<<" ";
        file1<<books[i].author<<" ";
        file1<<books[i].price<<" ";
        file1<<books[i].ISBN_num<<'\n';
    }
    
    file1.close();
    
    char ISBN_search[14];
    cout<<"Enter an ISBN number: ";
    cin>>ISBN_search;
    
    ifstream file2;
    
    file2.open("file_1.txt");
    
    for(i=0; i<n; i++)
    {
        file2>>books[i].ISBN_num;
        if(strcmp(books[i].ISBN_num, ISBN_search)==0) break;
    }
    
    if(i==n) cout<<"No\n";
    else cout<<"Yes\n";
    
    file2.close();
    
    return 0;
}
