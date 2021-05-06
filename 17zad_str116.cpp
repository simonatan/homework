#include <iostream>
using namespace std;

int main()
{
    int arr[100], max, n, index;
    cout<<"Broj na elementi: ";
    cin>>n;
    
    for(int i=0; i<n; i++) cin>>arr[i];
  
    max=arr[0];
    index=0;
    
    for(int i=1; i<n; i++)
    {
        if(arr[i]>max)
        {
            index=i;
            max=arr[i];
        }
    }
   
    cout<<max<<" "<<index<<endl;

return 0;
}
