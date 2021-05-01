#include <iostream>
using namespace std;
int main()
{
    unsigned int k, sum=0, br=0;
    
    while(k!=0)
    {
        cin>>k;
        if(k%2==0) sum+=k;
        if(k%2!=0) br++;
    }
    
    cout<<sum<<" "<<br<<endl;
    
return 0;
}
