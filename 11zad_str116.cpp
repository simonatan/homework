#include <iostream>
using namespace std;

int main()
{
    unsigned int n;
    cout<<"Broj na elementi: ";
    cin>>n;
    
    int arr[n], x, i;
   
    for(int i=0; i<n; i++) cin>>arr[i];
    cin>>x;
    
    for(i=0; i<n; i++)
    {
        if(arr[i]==x) {cout<<"Yes\n"; break;}
    }
    
    if(i==n) cout<<"No\n";

return 0;
}
