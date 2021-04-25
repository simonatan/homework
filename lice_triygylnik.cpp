#include <iostream>
#include <cmath> // for square root
using namespace std;
int main()
{
    float a, c, b, S;
    cin>>a>>c;
    
    if(c>a)
    {
        b=sqrt(c*c - a*a);
        S=(a*b)/2;
        cout<<"S="<<S<<endl;
    }
    else cout<<"Hekorektni danni\n";
    
return 0;
}

