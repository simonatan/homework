#include <iostream>
using namespace std;

int main ()
{
    int n, arr[45], flag=0;
    cin>>n;
    
    for(int i=0; i<n; i++) cin>>arr[i];
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0 && arr[i+1]==0)
        {
            flag=1;
            break;
        }
    }
    
    if(flag==1) cout<<"yes\n";
    else cout<<"no\n";
    
    return 0;
}
