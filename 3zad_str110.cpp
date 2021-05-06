#include <iostream>
using namespace std;
int main()
{
    double arr[30], max;
    int n;
    cout<<"Wywedi broj uchenici: ";
    cin>>n;
    for(int i=0; i<n; i++) cin>>arr[i];
    
    max=arr[0];
    
    for(int i=1; i<n; i++)
    {
        if(arr[i]>max) max=arr[i];
    }
    
    cout<<max<<endl;
    
return 0;
}
