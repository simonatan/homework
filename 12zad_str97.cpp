#include <iostream>
using namespace std;
int main()
{
    int sbor, a, b, c, d;
    
    for(int i=1000 ; i<10000 ; i++)
    {
        a=i/1000;
        b=(i/100)%10;
        c=(i/10)%10;
        d=i%10;
        
        sbor=a + b + c + d;
        
        if(sbor%2==0 && sbor>9)
        { cout <<i<<", "; }
        
    }

    return 0;
}
