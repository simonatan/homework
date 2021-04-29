#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    
    int n, k, a, b, c;
    cin>>n>>k;
    
    a= n/100;
    b= (n/10)%10;
    c= n%10;
    
    if((a+b+c)%k==0) cout<<"yes "<<c<<b<<a<<endl;
    else cout<<"no "<<(a+b+c)*k<<endl;
        
return 0;
}

