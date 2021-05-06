#include <iostream>
using namespace std;
int main()
{
    int p, i=2;
    cin>>p;
    cout<<p<<"=";
    
    if (p==1) cout<<1;
      
    do
    {
        if(p%i==0)
        {
          p/=i;
          if (p==1) cout<<i;
          else cout<<i<<'*';
        }
        else i++;
    }
    while(p>1);
    
    cout<<endl;
    
return 0;
}
