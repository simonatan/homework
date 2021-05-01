#include <iostream>
using namespace std;
int main()
{
    unsigned int n, c, br=0;
    cin>>n;
    
    while(n!=0)
    {
        c=n%10;
        if(c%2==0) br++;
        n/=10;
    }
    
    cout<<br<<endl;
    
return 0;
}
