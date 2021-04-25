#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, swap;
    cin>>a>>b;
    
    cout<<a-b<<endl;
    swap=a;
    a=b;
    b=swap;
    
    cout<<a-b<<endl;
    
return 0;
}

