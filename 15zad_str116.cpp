#include <iostream>
using namespace std;

int main()
{
    double arr[24], sum=0;
    int n, br=0;
    cout<<"Broj na elementi: ";
    cin>>n;
    
    for(int i=0; i<n; i++) cin>>arr[i];
  
    for(int i=0; i<n; i++)
    {
        if(arr[i]>0) {br++; sum+=arr[i];}
    }
   
    if(br!=0) cout<<sum/br<<endl;
    else cout<<0<<endl;

return 0;
}
