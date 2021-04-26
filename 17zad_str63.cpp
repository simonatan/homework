#include <iostream>
/* #include <iomanip>
#include <cmath> */
using namespace std;
int main()
{

    unsigned int k, k1, k2, k3, k4, k5, sum;
    cin>>k;
    
    k1= k/10000;
    k2= (k/1000)%10;
    k3= (k/100)%10;
    k4= (k/10)%10;
    k5= k%10;
    
//a)
    cout<<k1%2+k2%2+k3%2+k4%2+k5%2<<endl;
    
//b)
    sum=k1+k2+k3+k4+k5;
    cout<<(sum-(k1%2*k1+k2%2*k2+k3%2*k3+k4%2*k4+k5%2*k5))<<endl;
    
return 0;
}

