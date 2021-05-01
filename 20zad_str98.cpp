#include <iostream>
using namespace std;
int main()
{
    int n, k, p, flag=0;
    cin>>n;
    cin>>p;
    
    for(int i=0; i<n-1; i++)
    {
        cin>>k;
        if(p==k)
        {
            flag=1;
            break;
        }
        p=k;
    }
    
    if(flag==1) cout<<"Yes\n";
    else cout<<"No\n";
    
return 0;
}
