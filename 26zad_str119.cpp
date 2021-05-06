#include <iostream>
using namespace std;

int main()
{
    int n, pos;
    double arr[95], swap, max;
    cin>>n;
      
    for(int i=0;i<n;i++)cin>>arr[i];
      
    for(int i=0;i<n-1;i++)
    {
        pos=i;
        max=arr[i];
        
        for(int j=i+1; j<n; j++)
        {
          if(arr[j]>max)
          {
            max=arr[j];
            pos=j;
          }
        swap=arr[pos];
        arr[pos]=arr[i];
        arr[i]=swap;
        }
    }
      
      for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    
return 0;
}
