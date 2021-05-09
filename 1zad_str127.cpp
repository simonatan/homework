#include <iostream>
using namespace std;

int main ()
{
    char str[21];
    cin>>str;
    int i=0;
    
    while(str[i]!='\0') i++;
    cout<<i<<endl;
    
    return 0;
}
