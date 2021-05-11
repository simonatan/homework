#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    char name[20];
    int year;
    ofstream myFile;
    myFile.open("c:/zad_1.txt", ios::out);
    
    for(int i=0; i<5; i++)
    {
        cout<<"Name: ";
        cin>>name;
        cout<<"Age: ";
        cin>>year;
        
        myFile<<name<<" ";
        myFile<<year<<"\n";
    }
    
    myFile.close();
    
    return 0;
}
