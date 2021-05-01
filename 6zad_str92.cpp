#include <iostream>
using namespace std;
int main()
{
    unsigned int n;
    double chislo, max, min;
    
    cout<<"n=";
    cin>>n>>chislo;
    min=chislo;
    max=chislo;
    
    for(int i=1; i<=n-1; i++)
    {
        cin>>chislo;
        if(chislo>max) max=chislo;
        if(chislo<min) min=chislo;
        
    }
    
    cout<<"Max="<<max<<"\nMin="<<min<<endl;
    
return 0;
}
