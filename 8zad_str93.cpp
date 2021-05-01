#include <iostream>
using namespace std;
int main()
{
    double chislo, sum=0, pr=1;
    int n;
    cin>>n;
    
    for(int i=1; i<=n; i++)
    {
        cin>>chislo;
        sum+=chislo;
        pr*=chislo;
    }
    
    cout<<"Sum="<<sum<<"\nPr="<<pr<<endl;
    
return 0;
}
