#include <iostream>
using namespace std;
int main()
{
    unsigned int n, sum=0, max=0;
    cin>>n;
    
    while(n!=0)
    {
        if(n%10>max) max=n%10;
        sum+=n%10;
        n/=10;
    }
    
    cout<<sum<<" "<<max<<endl;
    
return 0;
}
