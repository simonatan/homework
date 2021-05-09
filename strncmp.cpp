#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
    int r;
//    char a[]="matematika", b[]="matura";
//    r=strncmp(a, b, 4);
    
//    char a[]="ivan", b[]="iva";
//    r=strncmp(a, b, 2);
    
    char a[]="istoria", b[]="istina";
    r=strncmp(a, b, 5);
        
    cout<<r<<endl;
    
    return 0;
}
