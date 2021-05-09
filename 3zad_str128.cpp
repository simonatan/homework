#include <iostream>
using namespace std;

int main ()
{
    char str[21];
    cin>>str;
    int i=0, br=0;
    
    while(str[i]!='\0')
    {
        if(str[i]>='0' && str[i]<='9') br++;
        i++;
    }

    cout<<br<<endl;
    
    return 0;
}
