#include <iostream>
using namespace std;
int main()
{
    int n, sum=0, pr=1;
    cin>>n;
    
//a)
    for(int i=1; i<=n; i++)
    {
        sum+=i;
    }
    
    cout<<sum<<endl;
    
//b)
    
    for(int i=1; i<=n; i++)
    {
        pr*=i;
    }
    
    cout<<pr<<endl;
    
return 0;
}
