#include <iostream>
using namespace std;

int main ()
{
    int n, arr[120], i;
    cin>>n;
    
    for(int i=0; i<n; i++) cin>>arr[i];
    
    for(i=0; i<n/2; i++)
    {
        if(arr[i]!=arr[n-i-1])
            {
                cout<<"No\n";
                break;
            }
    }
    
    if(i==n/2) cout<<"Yes\n";
    
    return 0;
}
