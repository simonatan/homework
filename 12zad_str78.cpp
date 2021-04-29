#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    
    unsigned int n;
    cin>>n;
    
    if( n%(n/100)==0 && n%((n/10)%10)==0 && n%(n%10)==0 )
    {
        cout<<"yes\n"<<n/100+(n/10)%10+n%10<<endl;;
    }
    else cout<<"no\n"<<(n/100)*((n/10)%10)*(n%10)<<endl;
    
return 0;
}

