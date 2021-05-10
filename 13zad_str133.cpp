#include <iostream>
using namespace std;

int main ()
{

    char str[81];
    cin.getline(str, 81, '.');
    
    int i=0, br=0;
    while(str[i]!='\0')
    {
        if(str[i]==' ') br++;
        i++;
    }
    
    cout<<br+1<<endl;
    
    return 0;
}
