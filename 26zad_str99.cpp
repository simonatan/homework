#include <iostream>
using namespace std;
int main()
{
    int n, i=3;
    long a1=1, a2=1, an=0;
    cin>>n;
    
    if(n==1 || n==2) an=1;
    else
        while (i<=n)
        {
          an=a1+a2;
          a1=a2;
          a2=an;
          i++;
        }
    
    cout<<an<<endl;
    
return 0;
}
