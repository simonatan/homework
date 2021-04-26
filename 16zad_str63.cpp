#include <iostream>
/* #include <iomanip>
#include <cmath> */
using namespace std;
int main()
{

    unsigned int k, k1, k2, k3, k4;
    cin>>k;
    
    k1= k/1000;
    k2= (k/100)%10;
    k3= (k/10)%10;
    k4= k%10;
    
    cout<<k1+k2+k3+k4<<" "<<k1*k2*k3*k4<<endl;
    
return 0;
}

