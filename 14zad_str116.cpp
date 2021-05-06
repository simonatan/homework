#include <iostream>
using namespace std;

int main()
{
    int arr[29], n, br=0;
    cout<<"Broj na elementi: ";
    cin>>n;
    
    for(int i=0; i<n; i++) cin>>arr[i];
  
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0) br++;
    }
    cout<<br<<endl;

return 0;
}
