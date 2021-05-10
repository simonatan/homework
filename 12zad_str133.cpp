#include <iostream>
using namespace std;

int main ()
{
//reshenie 1
//    char ime[30], prezime[30], familiq[30];
//    cin.getline(ime, 30, ' ');
//    cin.getline(prezime, 30, ' ');
//    cin.getline(familiq, 30);
//
//    cout<<ime<<endl;
//    cout<<prezime<<endl;
//    cout<<familiq<<endl;
    
//reshenie 2
    char str[100];
    cin.getline(str, 100);
    
    int i=0;
    
    while(str[i]!='\0')
    {
        if(str[i]!=' ') cout<<str[i];
        else cout<<endl;
        i++;
    }
    
    cout<<endl;
    
    return 0;
}
