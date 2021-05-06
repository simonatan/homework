#include <iostream>
using namespace std;
int main()
{
    int n;
    long a1=1, a2=1, an=0;
    cin>>n;
    
    while (an<=n)
    {
      an=a1+a2;
      a1=a2;
      a2=an;
    }
    
    cout<<a2<<endl;
    
return 0;
}
