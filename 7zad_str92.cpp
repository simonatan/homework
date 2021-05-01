#include <iostream>
using namespace std;
int main()
{
    double chislo, max, min;
    
    cin>>chislo;
    min=chislo;
    max=chislo;
    
    while(chislo!=0)
    {
        if(max<chislo) max=chislo;
        if(min>chislo) min=chislo;
        cin>>chislo;
    }
    
    cout<<"Max="<<max<<"\nMin="<<min<<endl;
    
return 0;
}
