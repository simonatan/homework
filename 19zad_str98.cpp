#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    unsigned int n, k1=-1, k2=2, min=100, max=0, sub;
    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        cin>>k1>>k2;
        if(k1>k2) sub=k1-k2;
        else sub=k2-k1;
        
        if(sub>max) max=sub;
        if(sub<min) min=sub;
    }
    
    cout<<max<<" "<<min<<endl;
    
return 0;
}
