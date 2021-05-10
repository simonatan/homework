#include <iostream>
using namespace std;
struct Student
{
    char first_name[20];
    char second_name[20];
    char last_name[20];
    char egn[11];
    double sr_uspeh;
};
int main ()
{
    Student a;
    
    cout<<"Name: ";
    cin>>a.first_name;
    cout<<"Second name: ";
    cin>>a.second_name;
    cout<<"Last name: ";
    cin>>a.last_name;
    cout<<"EGN: ";
    cin>>a.egn;
    cout<<"Average grade: ";
    cin>>a.sr_uspeh;
    
    cout<<a.first_name<<" "<<a.second_name<<" "<<a.last_name<<" "<<a.egn<<" "<<a.sr_uspeh<<endl;
    
    return 0;
}
