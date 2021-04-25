#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, P, S;
    cin>>a>>b>>c;
    
    a=a/2;
    b=b/2;
    c=c/2;
    
    P=2*(a*b+b*c+c*a);
    S=a*b*c;
    
    cout<<"P="<<P<<", S="<<S<<endl;
    
return 0;
}

