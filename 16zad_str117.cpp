#include <iostream>
using namespace std;

int main()
{
    int arr[39], pr=1, n;
    cout<<"Broj na elementi: ";
    cin>>n;
    
    for(int i=0; i<n; i++) cin>>arr[i];
  
    for(int i=0; i<n; i++)
    {
        if(arr[i]%7==0) pr*=arr[i];
    }
   
    if(pr==1) cout<<"No"<<endl;
    else cout<<pr<<endl;

return 0;
}
