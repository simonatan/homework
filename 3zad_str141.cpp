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
    Student students[35];
    
    int n;
    cout<<"Number of students: ";
    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        cout<<"Name: ";
        cin>>students[i].first_name;
        cout<<"Second name: ";
        cin>>students[i].second_name;
        cout<<"Last name: ";
        cin>>students[i].last_name;
        cout<<"EGN: ";
        cin>>students[i].egn;
        cout<<"Average grade: ";
        cin>>students[i].sr_uspeh;
    }
    
    for(int i=0; i<n; i++)
    {
        if(students[i].sr_uspeh>=5.50)
        {
            cout<<students[i].first_name<<" ";
            cout<<students[i].second_name<<" ";
            cout<<students[i].last_name<<" ";
            cout<<students[i].egn<<" ";
            cout<<students[i].sr_uspeh<<endl;
        }
    }
    
    return 0;
}
