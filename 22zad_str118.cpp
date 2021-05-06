#include <iostream>
using namespace std;

int main()
{
    int arr[24], n, br=0, sum=0;
    cout<<"Broj na elementi: ";
    cin>>n;
    
    for(int i=0; i<n; i++) cin>>arr[i];
    
    for(int j=0; j<n; j++)
    {
        sum=0;
        while(arr[j]!=0)
        {
            sum+=arr[j]%10;
            arr[j]/=10;
        }
        if(sum>9 || sum<-9) br++;
    }
    
    if(br==0) cout<<"No\n";
    else cout<<br<<endl;
    
return 0;
}
