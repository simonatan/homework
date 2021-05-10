#include <iostream>
using namespace std;

int main ()
{
    char str[71];
    cin.getline(str, 71);
    
    int i=0, j=0, flag=1;
    
    while(str[i]!='\0')
    {
        j=i+1;
        while(str[j]!='\0')
        {
            if(str[j]==str[i]) break;
            j++;
        }
        if(str[j]=='\0') flag=0;
        else
        {
            cout<<str[i]<<" "<<i<<" "<<j<<endl;
            break;
        }
        i++;
    }
    
    if(flag==0) cout<<"No\n";
    
    return 0;
}
