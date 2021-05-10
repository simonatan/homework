#include <iostream>
using namespace std;

int main ()
{
    char str[100];
    cin.getline(str, 100);
    
    int i=0;
    
    while(str[i]!='\0') i++;
    
    cout<<i<<endl;
    
    return 0;
}
