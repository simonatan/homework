#include <iostream>
#include <cmath> // for square root
using namespace std;
int main()
{
    float a, c, b, p, ha, hb, hc;
    cin>>a>>b>>c;
    
    if(c<(a+b))
    {
        p= (a+b+c)/2;
        ha= sqrt(a*a-(p-c)*(p-c));
        hb= sqrt(a*a-(p-b)*(p-b));
        hc= sqrt(b*b-(p-c)*(p-c));
        cout<<"ha="<<ha<<" hb="<<hb<<" hc="<<hc<<endl;
        
    }
    else cout<<"Neprawilni danni";
    
return 0;
}

