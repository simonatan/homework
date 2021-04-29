#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long int x, y, z, max=-2147483647, min=2147483647;
    cin>>x>>y>>z;
    
    if(x%2==0 && x>max) max=x;
    if(y%2==0 && y>max) max=y;
    if(z%2==0 && z>max) max=z;
    
    if(x%2!=0 && x<min) min=x;
    if(y%2!=0 && y<min) min=y;
    if(z%2!=0 && z<min) min=z;
    
    if(x%2!=0 && y%2!=0 && z%2!=0) cout<<min<<endl;
    else
    {
        if(x%2==0 && y%2==0 && z%2==0) cout<<max<<endl;
        else cout<<max-min<<endl;
    }
    
return 0;
}

