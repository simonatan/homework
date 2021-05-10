#include <iostream>
using namespace std;

int main ()
{
    char str[81];
    cin.getline(str, 81);
    
    int i=0, br=0;
    
    if(str[1]==' ' || str[1]=='.') br++;
    
    while(str[i]!='\0')
    {
        if((str[i]==' ' && str[i+2]==' ') || (str[i]==' ' && str[i+2]=='\0')) br++;
        i++;
    }
    
    cout<<br<<endl;
    
    return 0;
}
