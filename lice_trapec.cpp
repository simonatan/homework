#include <iostream>
#include <cmath> // for square root
using namespace std;
int main()
{
    float a, b, c, S, d, h;
    cin>>a>>b>>c;
    d=fabs(a-b)/2; // za modul ot neshtata w skobite
    if(d<c)
    {
        h=sqrt (c*c-d*d);
        S= ((a+b)/2)*h;
        cout<<"S="<<S<<endl;
    }
    else cout<<"Hekorektni danni\n";
    
return 0;
}

