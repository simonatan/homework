#include <iostream>
#include <fstream>
using namespace std;
struct Student
{
    char first_name[20];
    char second_name[20];
    char last_name[20];
    double sr_uspeh;
    char egn[11];
};
int main ()
{
    Student students;
    fstream file;
    file.open("c:/students.txt", ios::in);
    int n;
    
    cout<<"Enter the number of the students: ";
    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        cout<<"Name: ";
        cin>>students.first_name;
        cout<<"Second name: ";
        cin>>students.second_name;
        cout<<"Last name: ";
        cin>>students.last_name;
        cout<<"Average grade: ";
        cin>>students.sr_uspeh;
        cout<<"EGN: ";
        cin>>students.egn;
        
        file<<students.first_name<<" ";
        file<<students.second_name<<" ";
        file<<students.last_name<<" ";
        file<<students.sr_uspeh<<" ";
        file<<students.egn<<'\n';
    }
    
    file.seekg(0);
    
    for(int i=0; i<n; i++)
    {
        file>>students.first_name;
        file>>students.second_name;
        file>>students.last_name;
        file>>students.sr_uspeh;
        file>>students.egn;
        
        if(students.sr_uspeh>=4 && students.sr_uspeh<=5)
        {
            cout<<students.first_name<<" ";
            cout<<students.second_name<<" ";
            cout<<students.last_name<<endl;
        }
    }
    
    file.close();
    
    return 0;
}
