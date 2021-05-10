#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
    char a[100], b[100];
    cin.getline(a, 100, ' ');
    cin.getline(b, 100);
    
    int br=0, i=0, j;
    
    
    while(a[i]!='\0')
    {
        j=0;
        if(a[i]==b[j])
        {
           while(b[j]!='\0')
           {
               if(a[i+j]!=b[j]) break;
               j++;
           }
        }
        if(b[j]=='\0') br++;
        i++;
    }
    
    cout<<br<<endl;
    
    return 0;
}
