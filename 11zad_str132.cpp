#include <iostream>
using namespace std;

int main ()
{
    char str[100], s;
    cin.getline(str, 100, ' ');
    cin>>s;

    int i=0, br=0;

    while(str[i]!='\0')
    {
        if(str[i]==s) br++;
        i++;
    }

    cout<<br<<endl;
    
    return 0;
}
