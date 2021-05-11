#include <iostream>
using namespace std;

int main ()
{
    double cost=10000, sum=0;
    
    for(int i=1; i<11; i++)
    {
        cost*=1.06;
        cout<<i<<" year: "<<cost<<" dollars\n";
    }

    for(int i=0; i<4; i++)
    {
        sum+=cost;
        cost*=1.06;
    }
    
    cout<<"\nThe tuition for 4 years in 10 years will cost "<<sum<<" dollars."<<endl;
    
    return 0;
}
