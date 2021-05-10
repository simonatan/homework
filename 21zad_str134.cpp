#include <iostream>
using namespace std;

int main ()
{
    char str[201];
    cin.getline(str, 201);

    int i=0, br=0;

    while(str[i]!='\0')
    {
        if(str[i]==' ' || str[i]=='\0')
        {
            br++;
            while(str[i+1]==' ') i++;
        }
        i++;
    }
    
    cout<<br+1<<endl;
    
    return 0;
}
