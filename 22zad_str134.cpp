#include <iostream>
using namespace std;

int main ()
{
    char str[201];
    cin.getline(str, 201);

    int i=0;

    while(str[i]!='\0')
    {
        cout<<str[i];
        
        if(str[i]==' ')
        {
            while(str[i+1]==' ') i++;
        }
        i++;
    }
    
    cout<<endl;
    
    return 0;
}
