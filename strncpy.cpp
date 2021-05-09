#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
    char a[15], b[]="INFORMATIKA";
    strncpy(a, b, 4);
    cout<<a<<endl;
    
    return 0;
}
