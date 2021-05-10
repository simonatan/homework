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
    Student a={"Atanas", "Pawlow", "Dimitrow", "9103221652", 5.80};
    
    cout<<a.first_name<<endl;
    cout<<a.second_name<<endl;
    cout<<a.last_name<<endl;
    cout<<a.egn<<endl;
    cout<<a.sr_uspeh<<endl;
    
    return 0;
}
