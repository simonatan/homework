#include <iostream>
using namespace std;
int main()
{
    unsigned int k, max=0;
    
    while(k!=0)
    {
        cin>>k;
        if(k>max && k%2!=0) max=k;
    }
    
    if(max!=0) cout<<max<<endl;
    else cout<<"Ne ste wyweli nechetni chisla\n";
    
return 0;
}
