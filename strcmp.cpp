#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
   // char a[]="aaa", b[]="aaa";
   // char a[]="aab", b[]="aaa";
    char a[]="aab", b[]="aba";
    int r;
    r=strcmp(a, b);
        
    cout<<r<<endl;
    
    return 0;
}
