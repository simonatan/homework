#include <iostream>
/* #include <iomanip>
#include <cmath> */
using namespace std;
int main()
{

    unsigned int k, k1, k2, k3;
    cin>>k;
    
    k1= k/100;
    k2= (k/10)%10;
    k3= k%10;
    
    k= k1 + k2*10 + k3*100;
    
    cout<<k<<endl;
    
return 0;
}

