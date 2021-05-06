#include <iostream>
using namespace std;

int main()
{
    unsigned int n;
    cout<<"Broj na elementi: ";
    cin>>n;
    
    double arr[n], sum=0;
   
    for(int i=0; i<n; i++) cin>>arr[i];
  
    for(int i=0; i<n; i++)
    {
        if(arr[i]<0) sum+=arr[i];
    }
    
    cout<<sum<<endl;

return 0;
}
