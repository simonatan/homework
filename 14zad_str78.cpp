#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    
    int n, a, b, c;
    cin>>n;
    
    a= n/100;
    b= (n/10)%10;
    c= n%10;
    
    if((a+b+c)>=10) cout<<"yes "<<(a+b+c)<<endl;
    else cout<<"no "<<(a*b*c)<<endl;
        
return 0;
}

