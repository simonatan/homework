#include <iostream>
using namespace std;

int main()
{
    double arr[25], max;
    int n, br=0;
    cout<<"Broj na elementi: ";
    cin>>n;
    
    for(int i=0; i<n; i++) cin>>arr[i];
  
    max=arr[0];

//reshenie 1
    for(int j=1; j<n; j++)
    {
        if(arr[j]>max)
        {
            max=arr[j];
        }
    }

    for(int k=0; k<n; k++)
    {
        if(arr[k]==max) br++;
    }

    cout<<br<<endl;
    
//reshenie 2
    
//    br=1;
//    for(int j=1; j<n; j++)
//    {
//        if(arr[j]>max) max=arr[j];
//        else if(arr[j]==max) br++;
//    }
//
//    cout<<br<<endl;
    
    
return 0;
}
