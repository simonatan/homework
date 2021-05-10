#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
    char str[51];
    cin.getline(str, 51);
    
    int n, i;
    
    n=strlen(str);
    
    for(i=0; i<n/2; i++)
    {
        if(str[i]!=str[n-i-1])
        {
            cout<<"No\n";
            break;
        }
    }
    
    if(i==n/2) cout<<"Yes\n";
    
    return 0;
}
