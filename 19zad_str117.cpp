#include <iostream>
using namespace std;

int main()
{
    double arr[125], max, min, swap;
    int n, maxi=0, mini=0;
    cout<<"Broj na elementi: ";
    cin>>n;
    
    for(int j=0; j<n; j++) cin>>arr[j];
  
    max=arr[0];
    min=arr[0];
    
    for(int i=1; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            maxi=i;
        }
        
        if(arr[i]<min)
        {
            min=arr[i];
            mini=i;
        }
    }
   
    swap=arr[maxi];
    arr[maxi]=arr[mini];
    arr[mini]=swap;
    
    for(int k=0; k<n; k++) cout<<arr[k]<<" ";

return 0;
}
