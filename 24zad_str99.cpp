#include <iostream>
using namespace std;
int main()
{
    unsigned int n, br=0;
    double av=0;
    cin>>n;
    
    while(n!=0)
    {
        br++;
        av+=n%10;
        n/=10;
    }
    
    cout<<av/br<<endl;
    
return 0;
}
