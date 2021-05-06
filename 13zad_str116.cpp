#include <iostream>
using namespace std;

int main()
{
    int arr[35], x, i, n;
    cout<<"Broj na elementi: ";
    cin>>n;
    
    for(int i=0; i<n; i++) cin>>arr[i];
    cin>>x;
  
    for(i=0; i<n; i++)
    {
        if(arr[i]==x) {cout<<i+1<<endl; break;}
    }
    
    if(i==n) cout<<"No\n";

return 0;
}
