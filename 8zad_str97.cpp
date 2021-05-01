#include <iostream>
using namespace std;
int main()
{
    int n;
    double a, r=1;
    cin>>n>>a;
    
    while(n!=0)
    {
        r*=a;
        n--;
    }
    
    cout<<r<<endl;
    
return 0;
}
