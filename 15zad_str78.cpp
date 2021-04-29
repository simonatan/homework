#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    
    int n, k;
    cin>>n>>k;
    
    if((n/100)*((n/10)%10)*(n%10)>k) cout<<"yes "<<(n/100)*((n/10)%10)*(n%10)+k<<endl;
    else cout<<"no "<<k-(n/100)*((n/10)%10)*(n%10)<<endl;
        
return 0;
}

