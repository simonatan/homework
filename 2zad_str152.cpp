#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    char name[20];
    int year;
    ifstream myFile;
    myFile.open("c:/zad_1.txt", ios::in);
    
    for(int i=0; i<5; i++)
    {
        myFile>>name;
        cout<<name<<" ";
        myFile>>year;
        cout<<year<<'\n';
    }
    
    myFile.close();
    
    return 0;
}
