#include <iostream>
using namespace std;

int main()
{
    double arr[31], x;
    int i, n;
    cout<<"Wywedi broj uchenici: ";
    cin>>n;
    
    for(i=0; i<n; i++) cin>>arr[i];
    
    cout<<"x=";
    cin>>x;
    
    for(i=0; i<n; i++)
    {
        if(arr[i]==x)
        {
            cout<<"Nameren e uchenik s takyw uspeh.\n";
            break;
        }
    }

    if(i==n) cout<<"Nqma uchenik s takyw uspeh.\n";
    
return 0;
}
