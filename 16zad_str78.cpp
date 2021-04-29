#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    
    int n, m, k1, k2, k3;
    cin>>n>>m;
    
    k1= n/100+m%10;
    k2= (n/10)%10+(m/10)%10;
    k3= n%10+m/100;
   
    if(k1>9) k1=k1/10+k1%10;
    if(k2>9) k2=k2/10+k1%10;
    if(k3>9) k3=k3/10+k1%10;
    
    cout<<k1<<k2<<k3<<endl;
        
return 0;
}

