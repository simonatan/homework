#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, sum, proiz;
    cin>>n;

    sum= n/100+(n/10)%10+n%10;
    proiz= (n/100)*((n/10)%10)*(n%10);
    
    if(proiz>99) cout<<"yes "<<proiz-sum<<endl;
    else cout<<"no "<<proiz<<endl;
        
return 0;
}

