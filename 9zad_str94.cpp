#include <iostream>
using namespace std;
int main()
{
    double k, chislo;
    int n, flag=0;
    cin>>k>>n;
    
    for(int i=1; i<=n; i++)
    {
        cin>>chislo;
        if(chislo==k)
        {
            flag=1;
            break;
        }
    }
    
    if(flag==1) cout<<"da\n";
    else cout<<"no\n";
    
return 0;
}
