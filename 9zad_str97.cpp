#include <iostream>
using namespace std;
int main()
{
    unsigned short k, sum;
    cin>>k;
    
    for(int i=100; i<1000; i++)
    {
        sum=i/100;
        sum+=i/10%10;
        sum+=i%10;
    
        if(sum==k) cout<<i<<" ";
    }
    
    cout<<endl;
    
return 0;
}
