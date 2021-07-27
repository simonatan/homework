#include <iostream>
using namespace std;
int main()
{
    cout<<"address arithmetic"<<"\n\n";
    
    int x=107, y=108, z=109, *p;
    cout<<&x<<' '<<&y<<' '<<&z<<endl;
    p=&z;
    
    p++;
    cout<<p<<' '<<*p<<endl;
    
    p--;
    cout<<p<<' '<<*p<<endl;
    
    p+=2;
    cout<<p<<' '<<*p<<endl;
    
    return 0;
}

