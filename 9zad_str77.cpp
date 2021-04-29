#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    
    double x;
    cin>>x;
    
    if(x>=20) cout<<"y="<<2*pow(x, 4)+3<<endl;
    else cout<<"y="<<fabs(x-1)<<endl;
    
return 0;
}

