#include <iostream>
using namespace std;
int main()
{
    int p, q, flag;
    cin>>p>>q;
 
    for(int i=p; i<=q; i++)
    {
        flag=1;
        for(int j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag!=0 && i!=1) cout<<i<<" ";
    }
    
    cout<<endl;
    
return 0;
}
