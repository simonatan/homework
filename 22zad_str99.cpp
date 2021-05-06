#include <iostream>
using namespace std;
int main()
{
    unsigned int n, br=1;
    cin>>n;
    
    while(n!=1)
    {
        if(n%2==1) br++;
        n/=2;
    }
    
    cout<<br<<endl;
    
return 0;
}
