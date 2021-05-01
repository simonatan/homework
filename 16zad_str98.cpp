#include <iostream>
using namespace std;
int main()
{
    unsigned int k, n, chislo, br=0, c;
    cin>>k>>n;
    
    for(int i=1; i<=n; i++)
    {
        c=0;
        cin>>chislo;
        while(chislo!=0)
        {
            c++;
            chislo/=10;
        }
        if(c==k) br++;
    }
    
    cout<<br<<endl;
    
return 0;
}
