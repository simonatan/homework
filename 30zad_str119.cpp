#include <iostream>
using namespace std;

int main ()
{
    int n, arr[150], flag=0, sum=0;
    cin>>n;
    
    for(int i=0; i<n; i++) cin>>arr[i];
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]<0)
        {
            sum+=arr[i];
        }
        else
        {
            cout<<arr[i]<<" ";
            flag=1;
            break;
        }
    }
    
    if(flag==0) cout<<"No\n";
    else cout<<sum<<endl;
    
    
    return 0;
}
