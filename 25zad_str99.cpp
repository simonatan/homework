#include <iostream>
using namespace std;
int main()
{
    unsigned short n;
    int r=0, p=1;
    cin>>n;
    
    while(n!=0)
    {
        r+=n%2*p;
        p*=10;
        n/=2;
    }
    
    cout<<r<<endl;
    
return 0;
}
