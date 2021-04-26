#include <iostream>
#include <iomanip>
/* #include <cmath> */
using namespace std;
int main()
{

    long k, k1, k2, k3, k4, k5, k6, k7, k8;
    double sum;
    cin>>k;
    
    k1= k/10000000;
    k2= (k/1000000)%10;
    k3= (k/100000)%10;
    k4= (k/10000)%10;
    k5= (k/1000)%10;
    k6= (k/100)%10;
    k7= (k/10)%10;
    k8= k%10;
    
    sum=k1+k2+k3+k4+k5+k6+k7+k8;
    
    cout<<sum/8<<endl;
    
return 0;
}

