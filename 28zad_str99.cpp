#include <iostream>
using namespace std;
int main()
{
// reshenie 1
    unsigned int p;
    cin>>p;
    
    for(int i=1; i<=p; i++)
    {
        if(p%i==0) cout<<i<<" ";
    }
   
    cout<<endl;
    
//reshenie 2
    
   /* unsigned int p;
    cin>>p;
    
    cout<<1<<" ";
    for(int i=2; i<=p/2; i++)
    {
        if(p%i==0) cout<<i<<" ";
    }
    
    cout<<p<<endl; */
    
return 0;
}
