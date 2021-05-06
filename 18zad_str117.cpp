#include <iostream>
using namespace std;

int main()
{
    double arr[15], max, min;
    int n;
    cout<<"Broj na elementi: ";
    cin>>n;
    
    for(int i=0; i<n; i++) cin>>arr[i];
  
    max=arr[0];
    min=arr[0];
    
    for(int i=1; i<n; i++)
    {
        if(arr[i]>max) max=arr[i];
        if(arr[i]<min) min=arr[i];
    }
   
    cout<<max*min<<" "<<max-min<<endl;

return 0;
}
