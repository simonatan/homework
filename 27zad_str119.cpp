#include <iostream>
using namespace std;

int main()
{    
    int n;
    double arr[55], swap;
    cin>>n;

    for(int i=0; i<n; i++) cin>>arr[i];

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
          if(arr[j]>arr[j+1])
          {
              swap=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=swap;
          }
        }
    }

    cout<<arr[n-1]-arr[0]<<endl;
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    
return 0;
}
