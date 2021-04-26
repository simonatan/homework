#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{

    double x;
    int a;
    
    cin>>x;
    x=x-floor(x);
    x*=100;
    x=floor(x);
    a=x;
    cout<<setw(5)<<a%10<<endl;
    
return 0;
}

