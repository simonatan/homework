#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    
    double a, b, c, p;
    cin>>a>>b>>c;
    
    if(a+b>c && b+c>a && a+c>b)
    {
        p=(a+b+c)/2;
        
        cout<<"S="<<sqrt(p*(p-a)*(p-b)*(p-c))<<endl;
    }
    else cout<<"Ne syshtestwuwa takyw triygylnik"<<endl;
        
return 0;
}

