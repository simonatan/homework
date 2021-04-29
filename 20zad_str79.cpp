#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, n1, n2, n3;
    cin>>n;

    n1= n/100;
    n2= (n/10)%10;
    n3= n%10;
    
    if(n1!=n2 && n1!=n3 && n2!=n3) cout<<"yes "<<n1*n3<<endl;
    else cout<<"no "<<n3<<n2<<n1<<endl;
        
return 0;
}

