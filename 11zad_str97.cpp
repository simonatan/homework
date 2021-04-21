#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    
    for(int i=100; i<1000; i++)
    {
        a=i/100;
        b=(i/10)%10;
        c=i%10;
        
        if(b!=0 && c!=0 && i%a==0 && i%b==0 && i%c==0)
        { cout<<i<<", "; }
    }
    

    return 0;
}
