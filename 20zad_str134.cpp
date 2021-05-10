#include <iostream>
using namespace std;

int main ()
{
    char str[201];
    cin.getline(str, 201);

    int i=0, br=0, min=200;

    while(str[i]!='\0')
    {
        if(str[i]==' ' || str[i]=='\0')
        {
            if(br<min) min=br;
            br=0;
            while(str[i+1]==' ') i++;
            
        }else br++;
        i++;
    }

    if(br<min) min=br;
    
    cout<<min<<endl;
    
    return 0;
}
