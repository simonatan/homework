#include <iostream>
using namespace std;

int main()
{
    int arr[30], n, br=0;
    double sum=0;
    cout<<"Broj na elementi: ";
    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    
    for(int j=0; j<n; j++)
    {
        if(arr[j]>(sum/n)) br++;
    }
  
    cout<<br<<endl;
    
return 0;
}
