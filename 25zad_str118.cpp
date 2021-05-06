#include <iostream>
using namespace std;

int main()
{
    unsigned int n, arr[100], flag=1;
    cout<<"Number of elements: ";
    cin>>n;
    
    for(int i=0; i<n; i++) cin>>arr[i];
    
    for(int i=0; i<n; i++)
    {
        flag=1;
        for(int j=2; j<=arr[i]/2; j++)
        {
            if(arr[i]%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag!=0 && arr[i]>1)
        {
            cout<<arr[i]<<" ";
            break;
        }
    }

    if(flag==0) cout<<"No\n";
    
return 0;
}
