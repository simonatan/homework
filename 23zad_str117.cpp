#include <iostream>
using namespace std;

int main()
{
    int arr[24], n, chislo, flag=0, br=0;
    cout<<"Broj na elementi: ";
    cin>>n;
    
    for(int i=0; i<n; i++) cin>>arr[i];
    
    for(int j=0; j<n; j++)
    {
        flag=1;
        chislo=arr[j];
        while(chislo!=0)
        {
            if(arr[j]%(chislo%10)!=0)
            {
                flag=0;
                break;
            }
            chislo/=10;
        }
        if(flag!=0)
        {
            cout<<arr[j]<<" ";
            br++;
        }
    }
    
    if(br==0) cout<<"No\n";
    
return 0;
}
