#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
struct Firma
{
    char name[41];
    char egn[11];
    char duty[21];
    int payment;
};
int main ()
{
    int n;
    cin>>n;
    
    Firma workers[51];
    
    for(int i=0; i<n; i++)
    {
        cin.get();
        cin.getline(workers[i].name, 41);
        cin>>workers[i].egn;
        cin>>workers[i].duty;
        cin>>workers[i].payment;
    }
    
    for(int i=0; i<n; i++)
    {
        if(workers[i].payment<700)
        {
            cout<<workers[i].name<<endl;
        }
    }
    
    return 0;
}
