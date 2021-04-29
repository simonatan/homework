#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    
    double x, y;
    cin>>x>>y;
    
    if(x<0)
    {
        if(x>y) cout<<x<<endl;
        else cout<<y<<endl;
    }
    else
    {
        if(x>y) cout<<y<<endl;
        else cout<<x<<endl;
    }
    
return 0;
}

