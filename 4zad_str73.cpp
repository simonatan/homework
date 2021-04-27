#include <iostream>
using namespace std;
int main()
{

    double x, y, z, a;
    cin>>x>>y>>z;
    
    if(x>y) {a=x; x=y; y=a;}
    if(x>z) {a=x; x=z; z=a;}
    if(y>z) {a=y; y=z; z=a;}
    cout<<x<<" "<<y<<" "<<z<<endl;
    
return 0;
}

